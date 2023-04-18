import fs from 'fs';
import { mapDeserializer, mapType } from './mappings.js';
import { toCamelCase } from './to_camel_case.js';
import { FunctionDeclaration } from './function_declaration.js';

export function generateTypeScriptCode(filename: string) {
  const fileContent = fs.readFileSync(filename, 'utf-8');
  const functionDeclarations: FunctionDeclaration[] = JSON.parse(fileContent);

  let output = `// WARNING: FILE CODE GENERATED BY BINDGEN UTILITY. DO NOT EDIT!
/* eslint-disable @typescript-eslint/no-unused-vars */
import { callWasmExport, asyncCallWasmExport } from '../call_wasm_export/index.js';
import { BufferDeserializer, NumberDeserializer, VectorDeserializer, BoolDeserializer } from '../serialize/index.js';
import { Fr, Fq, Point, Buffer32, Buffer128, Ptr } from '../types/index.js';
`;

  for (const { functionName, inArgs, outArgs, isAsync } of functionDeclarations) {
    try {
      const parameters = inArgs.map(({ name, type }) => `${toCamelCase(name)}: ${mapType(type)}`).join(', ');
      const inArgsVar = `[${inArgs.map(arg => toCamelCase(arg.name)).join(', ')}]`;
      const outTypesVar = `[${outArgs.map(arg => mapDeserializer(arg.type)).join(', ')}]`;
      const wasmCall = `const result = ${
        isAsync ? 'await asyncC' : 'c'
      }allWasmExport('${functionName}', ${inArgsVar}, ${outTypesVar});`;

      const n = outArgs.length;
      const returnStmt = n === 0 ? 'return;' : n === 1 ? 'return result[0];' : 'return result as any;';
      const returnType =
        outArgs.length === 0
          ? 'void'
          : outArgs.length === 1
          ? `${mapType(outArgs[0].type)}`
          : `[${outArgs.map(a => mapType(a.type)).join(', ')}]`;

      if (isAsync) {
        output += `
export async function ${toCamelCase(functionName)}(${parameters}): Promise<${returnType}> {
  ${wasmCall}
  ${returnStmt}
}
`;
      } else {
        output += `
export function ${toCamelCase(functionName)}(${parameters}): ${returnType} {
  ${wasmCall}
  ${returnStmt}
}
`;
      }
    } catch (err: any) {
      throw new Error(`Function ${functionName}: ${err.message}`);
    }
  }

  return output;
}
