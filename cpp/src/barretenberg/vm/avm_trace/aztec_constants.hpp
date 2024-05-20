// GENERATED FILE - DO NOT EDIT, RUN yarn remake-constants in circuits.js
#pragma once
#include <cstddef>

const size_t ARGS_LENGTH = 16;
const size_t MAX_NEW_NOTE_HASHES_PER_CALL = 16;
const size_t MAX_NEW_NULLIFIERS_PER_CALL = 16;
const size_t MAX_PRIVATE_CALL_STACK_LENGTH_PER_CALL = 4;
const size_t MAX_PUBLIC_CALL_STACK_LENGTH_PER_CALL = 16;
const size_t MAX_NEW_L2_TO_L1_MSGS_PER_CALL = 2;
const size_t MAX_PUBLIC_DATA_UPDATE_REQUESTS_PER_CALL = 16;
const size_t MAX_PUBLIC_DATA_READS_PER_CALL = 16;
const size_t MAX_NOTE_HASH_READ_REQUESTS_PER_CALL = 32;
const size_t MAX_NULLIFIER_READ_REQUESTS_PER_CALL = 32;
const size_t MAX_NULLIFIER_NON_EXISTENT_READ_REQUESTS_PER_CALL = 32;
const size_t MAX_NULLIFIER_KEY_VALIDATION_REQUESTS_PER_CALL = 16;
const size_t MAX_NOTE_ENCRYPTED_LOGS_PER_CALL = 16;
const size_t MAX_ENCRYPTED_LOGS_PER_CALL = 4;
const size_t MAX_UNENCRYPTED_LOGS_PER_CALL = 4;
const size_t MAX_NEW_NOTE_HASHES_PER_TX = 64;
const size_t MAX_NEW_NULLIFIERS_PER_TX = 64;
const size_t MAX_PRIVATE_CALL_STACK_LENGTH_PER_TX = 8;
const size_t MAX_PUBLIC_CALL_STACK_LENGTH_PER_TX = 32;
const size_t MAX_PUBLIC_DATA_UPDATE_REQUESTS_PER_TX = 32;
const size_t MAX_PUBLIC_DATA_READS_PER_TX = 32;
const size_t MAX_NEW_L2_TO_L1_MSGS_PER_TX = 2;
const size_t MAX_NOTE_HASH_READ_REQUESTS_PER_TX = 128;
const size_t MAX_NULLIFIER_READ_REQUESTS_PER_TX = 128;
const size_t MAX_NULLIFIER_NON_EXISTENT_READ_REQUESTS_PER_TX = 128;
const size_t MAX_NULLIFIER_KEY_VALIDATION_REQUESTS_PER_TX = 64;
const size_t MAX_NOTE_ENCRYPTED_LOGS_PER_TX = 64;
const size_t MAX_ENCRYPTED_LOGS_PER_TX = 8;
const size_t MAX_UNENCRYPTED_LOGS_PER_TX = 8;
const size_t NUM_ENCRYPTED_LOGS_HASHES_PER_TX = 1;
const size_t NUM_UNENCRYPTED_LOGS_HASHES_PER_TX = 1;
const size_t MAX_PUBLIC_DATA_HINTS = 64;
const size_t NUMBER_OF_L1_L2_MESSAGES_PER_ROLLUP = 16;
const size_t VK_TREE_HEIGHT = 3;
const size_t FUNCTION_TREE_HEIGHT = 5;
const size_t NOTE_HASH_TREE_HEIGHT = 32;
const size_t PUBLIC_DATA_TREE_HEIGHT = 40;
const size_t NULLIFIER_TREE_HEIGHT = 20;
const size_t L1_TO_L2_MSG_TREE_HEIGHT = 16;
const size_t ROLLUP_VK_TREE_HEIGHT = 8;
const size_t ARTIFACT_FUNCTION_TREE_MAX_HEIGHT = 5;
const size_t NULLIFIER_TREE_ID = 0;
const size_t NOTE_HASH_TREE_ID = 1;
const size_t PUBLIC_DATA_TREE_ID = 2;
const size_t L1_TO_L2_MESSAGE_TREE_ID = 3;
const size_t ARCHIVE_TREE_ID = 4;
const size_t NOTE_HASH_SUBTREE_HEIGHT = 6;
const size_t NOTE_HASH_SUBTREE_SIBLING_PATH_LENGTH = 26;
const size_t NULLIFIER_SUBTREE_HEIGHT = 6;
const size_t PUBLIC_DATA_SUBTREE_HEIGHT = 5;
const size_t ARCHIVE_HEIGHT = 16;
const size_t NULLIFIER_SUBTREE_SIBLING_PATH_LENGTH = 14;
const size_t PUBLIC_DATA_SUBTREE_SIBLING_PATH_LENGTH = 35;
const size_t L1_TO_L2_MSG_SUBTREE_HEIGHT = 4;
const size_t L1_TO_L2_MSG_SUBTREE_SIBLING_PATH_LENGTH = 12;
const size_t FUNCTION_SELECTOR_NUM_BYTES = 4;
const size_t ARGS_HASH_CHUNK_LENGTH = 64;
const size_t ARGS_HASH_CHUNK_COUNT = 64;
const size_t MAX_ARGS_LENGTH = ARGS_HASH_CHUNK_COUNT * ARGS_HASH_CHUNK_LENGTH;
const size_t INITIAL_L2_BLOCK_NUM = 1;
const size_t BLOB_SIZE_IN_BYTES = 31 * 4096;
const size_t MAX_PACKED_PUBLIC_BYTECODE_SIZE_IN_FIELDS = 20000;
const size_t MAX_PACKED_BYTECODE_SIZE_PER_PRIVATE_FUNCTION_IN_FIELDS = 3000;
const size_t MAX_PACKED_BYTECODE_SIZE_PER_UNCONSTRAINED_FUNCTION_IN_FIELDS = 3000;
const size_t REGISTERER_PRIVATE_FUNCTION_BROADCASTED_ADDITIONAL_FIELDS = 19;
const size_t REGISTERER_UNCONSTRAINED_FUNCTION_BROADCASTED_ADDITIONAL_FIELDS = 12;
const size_t DEFAULT_MAX_FEE_PER_GAS = 10;
const size_t DEFAULT_INCLUSION_FEE = 0;
const size_t DA_BYTES_PER_FIELD = 32;
const size_t DA_GAS_PER_BYTE = 16;
const size_t FIXED_DA_GAS = 512;
const size_t AZTEC_ADDRESS_LENGTH = 1;
const size_t GAS_FEES_LENGTH = 2;
const size_t GAS_LENGTH = 2;
const size_t GAS_SETTINGS_LENGTH = GAS_LENGTH * 2 + GAS_FEES_LENGTH + /* inclusion_fee */ 1;
const size_t CALL_CONTEXT_LENGTH = 6;
const size_t CONTENT_COMMITMENT_LENGTH = 4;
const size_t CONTRACT_INSTANCE_LENGTH = 5;
const size_t CONTRACT_STORAGE_READ_LENGTH = 2;
const size_t CONTRACT_STORAGE_UPDATE_REQUEST_LENGTH = 2;
const size_t ETH_ADDRESS_LENGTH = 1;
const size_t FUNCTION_DATA_LENGTH = 3;
const size_t FUNCTION_LEAF_PREIMAGE_LENGTH = 5;
const size_t GLOBAL_VARIABLES_LENGTH = 6 + GAS_FEES_LENGTH;
const size_t APPEND_ONLY_TREE_SNAPSHOT_LENGTH = 2;
const size_t L1_TO_L2_MESSAGE_LENGTH = 6;
const size_t L2_TO_L1_MESSAGE_LENGTH = 3;
const size_t SCOPED_L2_TO_L1_MESSAGE_LENGTH = L2_TO_L1_MESSAGE_LENGTH + 1;
const size_t MAX_BLOCK_NUMBER_LENGTH = 2;
const size_t NULLIFIER_KEY_VALIDATION_REQUEST_LENGTH = 3;
const size_t SCOPED_NULLIFIER_KEY_VALIDATION_REQUEST_LENGTH = NULLIFIER_KEY_VALIDATION_REQUEST_LENGTH + 1;
const size_t PARTIAL_STATE_REFERENCE_LENGTH = 6;
const size_t READ_REQUEST_LENGTH = 2;
const size_t LOG_HASH_LENGTH = 3;
const size_t NOTE_LOG_HASH_LENGTH = 4;
const size_t NOTE_HASH_LENGTH = 2;
const size_t SCOPED_NOTE_HASH_LENGTH = NOTE_HASH_LENGTH + 2;
const size_t NULLIFIER_LENGTH = 3;
const size_t SCOPED_NULLIFIER_LENGTH = NULLIFIER_LENGTH + 1;
const size_t SIDE_EFFECT_LENGTH = 2;
const size_t ROLLUP_VALIDATION_REQUESTS_LENGTH = MAX_BLOCK_NUMBER_LENGTH;
const size_t STATE_REFERENCE_LENGTH = APPEND_ONLY_TREE_SNAPSHOT_LENGTH + PARTIAL_STATE_REFERENCE_LENGTH;
const size_t TX_CONTEXT_LENGTH = 2 + GAS_SETTINGS_LENGTH;
const size_t TX_REQUEST_LENGTH = 2 + TX_CONTEXT_LENGTH + FUNCTION_DATA_LENGTH;
const size_t HEADER_LENGTH =
    APPEND_ONLY_TREE_SNAPSHOT_LENGTH + CONTENT_COMMITMENT_LENGTH + STATE_REFERENCE_LENGTH + GLOBAL_VARIABLES_LENGTH;
const size_t PRIVATE_CIRCUIT_PUBLIC_INPUTS_LENGTH =
    CALL_CONTEXT_LENGTH + 4 + MAX_BLOCK_NUMBER_LENGTH + (READ_REQUEST_LENGTH * MAX_NOTE_HASH_READ_REQUESTS_PER_CALL) +
    (READ_REQUEST_LENGTH * MAX_NULLIFIER_READ_REQUESTS_PER_CALL) +
    (NULLIFIER_KEY_VALIDATION_REQUEST_LENGTH * MAX_NULLIFIER_KEY_VALIDATION_REQUESTS_PER_CALL) +
    (NOTE_HASH_LENGTH * MAX_NEW_NOTE_HASHES_PER_CALL) + (NULLIFIER_LENGTH * MAX_NEW_NULLIFIERS_PER_CALL) +
    MAX_PRIVATE_CALL_STACK_LENGTH_PER_CALL + MAX_PUBLIC_CALL_STACK_LENGTH_PER_CALL + 1 +
    (L2_TO_L1_MESSAGE_LENGTH * MAX_NEW_L2_TO_L1_MSGS_PER_CALL) + 2 +
    (NOTE_LOG_HASH_LENGTH * MAX_NOTE_ENCRYPTED_LOGS_PER_CALL) + (LOG_HASH_LENGTH * MAX_ENCRYPTED_LOGS_PER_CALL) +
    (LOG_HASH_LENGTH * MAX_UNENCRYPTED_LOGS_PER_CALL) + HEADER_LENGTH + TX_CONTEXT_LENGTH;
const size_t PUBLIC_CIRCUIT_PUBLIC_INPUTS_LENGTH =
    CALL_CONTEXT_LENGTH + 2 + (READ_REQUEST_LENGTH * MAX_NULLIFIER_READ_REQUESTS_PER_CALL) +
    (READ_REQUEST_LENGTH * MAX_NULLIFIER_NON_EXISTENT_READ_REQUESTS_PER_CALL) +
    (CONTRACT_STORAGE_UPDATE_REQUEST_LENGTH * MAX_PUBLIC_DATA_UPDATE_REQUESTS_PER_CALL) +
    (CONTRACT_STORAGE_READ_LENGTH * MAX_PUBLIC_DATA_READS_PER_CALL) + MAX_PUBLIC_CALL_STACK_LENGTH_PER_CALL +
    (NOTE_HASH_LENGTH * MAX_NEW_NOTE_HASHES_PER_CALL) + (NULLIFIER_LENGTH * MAX_NEW_NULLIFIERS_PER_CALL) +
    (L2_TO_L1_MESSAGE_LENGTH * MAX_NEW_L2_TO_L1_MSGS_PER_CALL) + 2 + (LOG_HASH_LENGTH * MAX_UNENCRYPTED_LOGS_PER_CALL) +
    HEADER_LENGTH + GLOBAL_VARIABLES_LENGTH + AZTEC_ADDRESS_LENGTH + /* revert_code */ 1 + 2 * GAS_LENGTH +
    /* transaction_fee */ 1;
const size_t PRIVATE_CALL_STACK_ITEM_LENGTH =
    AZTEC_ADDRESS_LENGTH + FUNCTION_DATA_LENGTH + PRIVATE_CIRCUIT_PUBLIC_INPUTS_LENGTH;
const size_t PUBLIC_CONTEXT_INPUTS_LENGTH =
    CALL_CONTEXT_LENGTH + HEADER_LENGTH + GLOBAL_VARIABLES_LENGTH + GAS_LENGTH + 2;
const size_t SCOPED_READ_REQUEST_LEN = READ_REQUEST_LENGTH + 1;
const size_t PUBLIC_DATA_READ_LENGTH = 2;
const size_t VALIDATION_REQUESTS_LENGTH =
    ROLLUP_VALIDATION_REQUESTS_LENGTH + (SCOPED_READ_REQUEST_LEN * MAX_NOTE_HASH_READ_REQUESTS_PER_TX) +
    (SCOPED_READ_REQUEST_LEN * MAX_NULLIFIER_READ_REQUESTS_PER_TX) +
    (SCOPED_READ_REQUEST_LEN * MAX_NULLIFIER_NON_EXISTENT_READ_REQUESTS_PER_TX) +
    (SCOPED_NULLIFIER_KEY_VALIDATION_REQUEST_LENGTH * MAX_NULLIFIER_KEY_VALIDATION_REQUESTS_PER_TX) +
    (PUBLIC_DATA_READ_LENGTH * MAX_PUBLIC_DATA_READS_PER_TX);
const size_t PUBLIC_DATA_UPDATE_REQUEST_LENGTH = 2;
const size_t COMBINED_ACCUMULATED_DATA_LENGTH =
    MAX_NEW_NOTE_HASHES_PER_TX + MAX_NEW_NULLIFIERS_PER_TX + MAX_NEW_L2_TO_L1_MSGS_PER_TX + 5 +
    (MAX_PUBLIC_DATA_UPDATE_REQUESTS_PER_TX * PUBLIC_DATA_UPDATE_REQUEST_LENGTH) + GAS_LENGTH;
const size_t COMBINED_CONSTANT_DATA_LENGTH = HEADER_LENGTH + TX_CONTEXT_LENGTH + GLOBAL_VARIABLES_LENGTH;
const size_t CALLER_CONTEXT_LENGTH = 2 * AZTEC_ADDRESS_LENGTH;
const size_t CALL_REQUEST_LENGTH = 1 + AZTEC_ADDRESS_LENGTH + CALLER_CONTEXT_LENGTH + 2;
const size_t PRIVATE_ACCUMULATED_DATA_LENGTH =
    (SCOPED_NOTE_HASH_LENGTH * MAX_NEW_NOTE_HASHES_PER_TX) + (SCOPED_NULLIFIER_LENGTH * MAX_NEW_NULLIFIERS_PER_TX) +
    (MAX_NEW_L2_TO_L1_MSGS_PER_TX * SCOPED_L2_TO_L1_MESSAGE_LENGTH) +
    (NOTE_LOG_HASH_LENGTH * MAX_NOTE_ENCRYPTED_LOGS_PER_TX) + (LOG_HASH_LENGTH * MAX_ENCRYPTED_LOGS_PER_TX) +
    (LOG_HASH_LENGTH * MAX_UNENCRYPTED_LOGS_PER_TX) + (CALL_REQUEST_LENGTH * MAX_PRIVATE_CALL_STACK_LENGTH_PER_TX) +
    (CALL_REQUEST_LENGTH * MAX_PUBLIC_CALL_STACK_LENGTH_PER_TX);
const size_t PRIVATE_KERNEL_CIRCUIT_PUBLIC_INPUTS_LENGTH =
    1 + VALIDATION_REQUESTS_LENGTH + PRIVATE_ACCUMULATED_DATA_LENGTH + COMBINED_CONSTANT_DATA_LENGTH +
    CALL_REQUEST_LENGTH + AZTEC_ADDRESS_LENGTH;
const size_t PUBLIC_ACCUMULATED_DATA_LENGTH =
    (MAX_NEW_NOTE_HASHES_PER_TX * NOTE_HASH_LENGTH) + (MAX_NEW_NULLIFIERS_PER_TX * NULLIFIER_LENGTH) +
    (MAX_NEW_L2_TO_L1_MSGS_PER_TX * 1) + (NOTE_LOG_HASH_LENGTH * MAX_NOTE_ENCRYPTED_LOGS_PER_TX) +
    (MAX_ENCRYPTED_LOGS_PER_TX * LOG_HASH_LENGTH) + (MAX_UNENCRYPTED_LOGS_PER_TX * LOG_HASH_LENGTH) +
    (MAX_PUBLIC_DATA_UPDATE_REQUESTS_PER_TX * PUBLIC_DATA_UPDATE_REQUEST_LENGTH) +
    (MAX_PUBLIC_CALL_STACK_LENGTH_PER_TX * CALL_REQUEST_LENGTH) + GAS_LENGTH;
const size_t PUBLIC_KERNEL_CIRCUIT_PUBLIC_INPUTS_LENGTH =
    VALIDATION_REQUESTS_LENGTH + PUBLIC_ACCUMULATED_DATA_LENGTH + PUBLIC_ACCUMULATED_DATA_LENGTH +
    COMBINED_CONSTANT_DATA_LENGTH + 1 + (MAX_PUBLIC_CALL_STACK_LENGTH_PER_TX * CALL_REQUEST_LENGTH) +
    AZTEC_ADDRESS_LENGTH;
const size_t KERNEL_CIRCUIT_PUBLIC_INPUTS_LENGTH = ROLLUP_VALIDATION_REQUESTS_LENGTH +
                                                   COMBINED_ACCUMULATED_DATA_LENGTH + COMBINED_CONSTANT_DATA_LENGTH +
                                                   PARTIAL_STATE_REFERENCE_LENGTH + 1 + AZTEC_ADDRESS_LENGTH;
const size_t CONSTANT_ROLLUP_DATA_LENGTH = APPEND_ONLY_TREE_SNAPSHOT_LENGTH + 4 + GLOBAL_VARIABLES_LENGTH;
const size_t BASE_OR_MERGE_PUBLIC_INPUTS_LENGTH =
    CONSTANT_ROLLUP_DATA_LENGTH + PARTIAL_STATE_REFERENCE_LENGTH + PARTIAL_STATE_REFERENCE_LENGTH + 4;
const size_t ENQUEUE_PUBLIC_FUNCTION_CALL_RETURN_LENGTH = 2 + FUNCTION_DATA_LENGTH + CALL_CONTEXT_LENGTH;
const size_t GET_NOTES_ORACLE_RETURN_LENGTH = 674;
const size_t NOTE_HASHES_NUM_BYTES_PER_BASE_ROLLUP = 2048;
const size_t NULLIFIERS_NUM_BYTES_PER_BASE_ROLLUP = 2048;
const size_t PUBLIC_DATA_WRITES_NUM_BYTES_PER_BASE_ROLLUP = 2048;
const size_t CONTRACTS_NUM_BYTES_PER_BASE_ROLLUP = 32;
const size_t CONTRACT_DATA_NUM_BYTES_PER_BASE_ROLLUP = 64;
const size_t CONTRACT_DATA_NUM_BYTES_PER_BASE_ROLLUP_UNPADDED = 52;
const size_t L2_TO_L1_MSGS_NUM_BYTES_PER_BASE_ROLLUP = 64;
const size_t LOGS_HASHES_NUM_BYTES_PER_BASE_ROLLUP = 64;
const size_t NUM_MSGS_PER_BASE_PARITY = 4;
const size_t NUM_BASE_PARITY_PER_ROOT_PARITY = 4;
const size_t RECURSIVE_PROOF_LENGTH = 93;
const size_t NESTED_RECURSIVE_PROOF_LENGTH = 109;
const size_t VERIFICATION_KEY_LENGTH_IN_FIELDS = 114;
