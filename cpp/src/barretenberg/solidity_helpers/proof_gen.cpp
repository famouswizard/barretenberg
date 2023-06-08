#include <iostream>
#include <sstream>
#include <bitset>

#include "barretenberg/plonk/composer/standard_plonk_composer.hpp"
#include "barretenberg/plonk/composer/ultra_plonk_composer.hpp"

#include "circuits/blake_circuit.hpp"
#include "circuits/add_2_circuit.hpp"
#include "circuits/recursive_circuit.hpp"
#include "utils/utils.hpp"

using namespace numeric;
using numeric::uint256_t;

template <typename Composer, typename Circuit> void generate_proof(std::string srs_path, uint256_t inputs[])
{
    Composer composer = Circuit::generate(srs_path, inputs);

    // @todo this only works for ultra! Why is ultra part of function name on ultra composer?
    auto prover = composer.create_ultra_with_keccak_prover();
    auto proof = prover.construct_proof();
    {
        auto verifier = composer.create_ultra_with_keccak_verifier();

        if (!verifier.verify_proof(proof)) {
            throw_or_abort("Verification failed");
        }

        std::string proof_bytes = bytes_to_hex_string(proof.proof_data);
        std::cout << proof_bytes;
    }
}

std::string pad_left(std::string input, size_t length)
{
    return std::string(length - std::min(length, input.length()), '0') + input;
}

/**
 * @brief Main entry point for the proof generator.
 * Expected inputs:
 * 1. plonk_flavour: ultra
 * 2. circuit_flavour: blake, add2, recursive
 * 3. public_inputs: comma separated list of public inputs
 * 4. project_root_path: path to the solidity project root
 * 5. srs_path: path to the srs db
 */
int main(int argc, char** argv)
{
    std::vector<std::string> args(argv, argv + argc);

    if (args.size() < 5) {
        info("usage: ", args[0], "[plonk flavour] [circuit flavour] [srs path] [public inputs]");
        return 1;
    }

    const std::string plonk_flavour = args[1];
    const std::string circuit_flavour = args[2];
    const std::string srs_path = args[3];
    const std::string string_input = args[4];

    // @todo dynamically allocate this
    uint256_t inputs[] = { 0, 0, 0, 0, 0 };

    size_t count = 0;
    std::stringstream s_stream(string_input);
    while (s_stream.good()) {
        std::string sub;
        getline(s_stream, sub, ',');
        if (sub.substr(0, 2) == "0x") {
            sub = sub.substr(2);
        }
        std::string padded = pad_left(sub, 64);
        inputs[count++] = uint256_t(padded);
    }

    if (plonk_flavour != "ultra") {
        info("Only ultra plonk flavour is supported at the moment");
        return 1;
    } else {
        if (circuit_flavour == "blake") {
            generate_proof<UltraPlonkComposer, BlakeCircuit<UltraPlonkComposer>>(srs_path, inputs);
        } else if (circuit_flavour == "add2") {
            generate_proof<UltraPlonkComposer, Add2Circuit<UltraPlonkComposer>>(srs_path, inputs);
        } else if (circuit_flavour == "recursive") {
            generate_proof<UltraPlonkComposer, RecursiveCircuit<UltraPlonkComposer>>(srs_path, inputs);
        } else {
            info("Invalid circuit flavour: " + circuit_flavour);
            return 1;
        }
    }
}