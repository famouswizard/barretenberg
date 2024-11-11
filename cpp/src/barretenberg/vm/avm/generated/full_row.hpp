// AUTOGENERATED FILE
#pragma once

#include <sstream>
#include <string>
#include <vector>

#include "barretenberg/common/ref_vector.hpp"

namespace bb {

template <typename FF> struct AvmFullRow {
    FF byte_lookup_sel_bin{};
    FF byte_lookup_table_byte_lengths{};
    FF byte_lookup_table_in_tags{};
    FF byte_lookup_table_input_a{};
    FF byte_lookup_table_input_b{};
    FF byte_lookup_table_op_id{};
    FF byte_lookup_table_output{};
    FF gas_base_da_gas_fixed_table{};
    FF gas_base_l2_gas_fixed_table{};
    FF gas_dyn_da_gas_fixed_table{};
    FF gas_dyn_l2_gas_fixed_table{};
    FF gas_sel_gas_cost{};
    FF main_clk{};
    FF main_sel_da_end_gas_kernel_input{};
    FF main_sel_da_start_gas_kernel_input{};
    FF main_sel_first{};
    FF main_sel_l2_end_gas_kernel_input{};
    FF main_sel_l2_start_gas_kernel_input{};
    FF main_sel_start_exec{};
    FF main_zeroes{};
    FF powers_power_of_2{};
    FF main_kernel_inputs{};
    FF main_kernel_value_out{};
    FF main_kernel_side_effect_out{};
    FF main_kernel_metadata_out{};
    FF main_calldata{};
    FF main_returndata{};
    FF alu_a_hi{};
    FF alu_a_lo{};
    FF alu_b_hi{};
    FF alu_b_lo{};
    FF alu_b_pow{};
    FF alu_c_hi{};
    FF alu_c_lo{};
    FF alu_cf{};
    FF alu_clk{};
    FF alu_cmp_gadget_gt{};
    FF alu_cmp_gadget_input_a{};
    FF alu_cmp_gadget_input_b{};
    FF alu_cmp_gadget_result{};
    FF alu_cmp_gadget_sel{};
    FF alu_ff_tag{};
    FF alu_ia{};
    FF alu_ib{};
    FF alu_ic{};
    FF alu_in_tag{};
    FF alu_max_bits_sub_b_bits{};
    FF alu_max_bits_sub_b_pow{};
    FF alu_op_add{};
    FF alu_op_cast{};
    FF alu_op_div{};
    FF alu_op_eq{};
    FF alu_op_lt{};
    FF alu_op_lte{};
    FF alu_op_mul{};
    FF alu_op_not{};
    FF alu_op_shl{};
    FF alu_op_shr{};
    FF alu_op_sub{};
    FF alu_partial_prod_hi{};
    FF alu_partial_prod_lo{};
    FF alu_range_check_input_value{};
    FF alu_range_check_num_bits{};
    FF alu_range_check_sel{};
    FF alu_remainder{};
    FF alu_sel_alu{};
    FF alu_sel_cmp{};
    FF alu_sel_shift_which{};
    FF alu_u128_tag{};
    FF alu_u16_tag{};
    FF alu_u1_tag{};
    FF alu_u32_tag{};
    FF alu_u64_tag{};
    FF alu_u8_tag{};
    FF alu_zero_shift{};
    FF binary_acc_ia{};
    FF binary_acc_ib{};
    FF binary_acc_ic{};
    FF binary_clk{};
    FF binary_ia_bytes{};
    FF binary_ib_bytes{};
    FF binary_ic_bytes{};
    FF binary_in_tag{};
    FF binary_mem_tag_ctr{};
    FF binary_mem_tag_ctr_inv{};
    FF binary_op_id{};
    FF binary_sel_bin{};
    FF binary_start{};
    FF bytecode_arifact_hash{};
    FF bytecode_as_fields{};
    FF bytecode_bytes{};
    FF bytecode_bytes_pc{};
    FF bytecode_class_id{};
    FF bytecode_contract_address{};
    FF bytecode_decomposed{};
    FF bytecode_deployer_addr{};
    FF bytecode_end_latch{};
    FF bytecode_incoming_viewing_key_x{};
    FF bytecode_incoming_viewing_key_y{};
    FF bytecode_initialization_hash{};
    FF bytecode_length_remaining{};
    FF bytecode_nullifier_key_x{};
    FF bytecode_nullifier_key_y{};
    FF bytecode_outgoing_viewing_key_x{};
    FF bytecode_outgoing_viewing_key_y{};
    FF bytecode_private_fn_root{};
    FF bytecode_public_key_hash{};
    FF bytecode_running_hash{};
    FF bytecode_salt{};
    FF bytecode_tagging_key_x{};
    FF bytecode_tagging_key_y{};
    FF cmp_a_hi{};
    FF cmp_a_lo{};
    FF cmp_b_hi{};
    FF cmp_b_lo{};
    FF cmp_borrow{};
    FF cmp_clk{};
    FF cmp_cmp_rng_ctr{};
    FF cmp_input_a{};
    FF cmp_input_b{};
    FF cmp_op_eq{};
    FF cmp_op_eq_diff_inv{};
    FF cmp_op_gt{};
    FF cmp_p_a_borrow{};
    FF cmp_p_b_borrow{};
    FF cmp_p_sub_a_hi{};
    FF cmp_p_sub_a_lo{};
    FF cmp_p_sub_b_hi{};
    FF cmp_p_sub_b_lo{};
    FF cmp_range_chk_clk{};
    FF cmp_res_hi{};
    FF cmp_res_lo{};
    FF cmp_result{};
    FF cmp_sel_cmp{};
    FF cmp_sel_rng_chk{};
    FF cmp_shift_sel{};
    FF conversion_clk{};
    FF conversion_input{};
    FF conversion_num_limbs{};
    FF conversion_output_bits{};
    FF conversion_radix{};
    FF conversion_sel_to_radix_be{};
    FF keccakf1600_clk{};
    FF keccakf1600_input{};
    FF keccakf1600_output{};
    FF keccakf1600_sel_keccakf1600{};
    FF main_abs_da_rem_gas{};
    FF main_abs_l2_rem_gas{};
    FF main_alu_in_tag{};
    FF main_base_da_gas_op_cost{};
    FF main_base_l2_gas_op_cost{};
    FF main_bin_op_id{};
    FF main_call_ptr{};
    FF main_da_gas_remaining{};
    FF main_da_out_of_gas{};
    FF main_dyn_da_gas_op_cost{};
    FF main_dyn_gas_multiplier{};
    FF main_dyn_l2_gas_op_cost{};
    FF main_emit_l2_to_l1_msg_write_offset{};
    FF main_emit_note_hash_write_offset{};
    FF main_emit_nullifier_write_offset{};
    FF main_emit_unencrypted_log_write_offset{};
    FF main_ia{};
    FF main_ib{};
    FF main_ic{};
    FF main_id{};
    FF main_id_zero{};
    FF main_ind_addr_a{};
    FF main_ind_addr_b{};
    FF main_ind_addr_c{};
    FF main_ind_addr_d{};
    FF main_internal_return_ptr{};
    FF main_inv{};
    FF main_is_fake_row{};
    FF main_is_gas_accounted{};
    FF main_kernel_in_offset{};
    FF main_kernel_out_offset{};
    FF main_l1_to_l2_msg_exists_write_offset{};
    FF main_l2_gas_remaining{};
    FF main_l2_out_of_gas{};
    FF main_mem_addr_a{};
    FF main_mem_addr_b{};
    FF main_mem_addr_c{};
    FF main_mem_addr_d{};
    FF main_note_hash_exist_write_offset{};
    FF main_nullifier_exists_write_offset{};
    FF main_nullifier_non_exists_write_offset{};
    FF main_op_err{};
    FF main_opcode_val{};
    FF main_pc{};
    FF main_r_in_tag{};
    FF main_rwa{};
    FF main_rwb{};
    FF main_rwc{};
    FF main_rwd{};
    FF main_sel_alu{};
    FF main_sel_bin{};
    FF main_sel_calldata{};
    FF main_sel_execution_end{};
    FF main_sel_execution_row{};
    FF main_sel_kernel_inputs{};
    FF main_sel_kernel_out{};
    FF main_sel_mem_op_a{};
    FF main_sel_mem_op_b{};
    FF main_sel_mem_op_c{};
    FF main_sel_mem_op_d{};
    FF main_sel_mov_ia_to_ic{};
    FF main_sel_mov_ib_to_ic{};
    FF main_sel_op_add{};
    FF main_sel_op_address{};
    FF main_sel_op_and{};
    FF main_sel_op_block_number{};
    FF main_sel_op_calldata_copy{};
    FF main_sel_op_cast{};
    FF main_sel_op_chain_id{};
    FF main_sel_op_dagasleft{};
    FF main_sel_op_div{};
    FF main_sel_op_ecadd{};
    FF main_sel_op_emit_l2_to_l1_msg{};
    FF main_sel_op_emit_note_hash{};
    FF main_sel_op_emit_nullifier{};
    FF main_sel_op_emit_unencrypted_log{};
    FF main_sel_op_eq{};
    FF main_sel_op_external_call{};
    FF main_sel_op_external_return{};
    FF main_sel_op_external_revert{};
    FF main_sel_op_fdiv{};
    FF main_sel_op_fee_per_da_gas{};
    FF main_sel_op_fee_per_l2_gas{};
    FF main_sel_op_function_selector{};
    FF main_sel_op_get_contract_instance{};
    FF main_sel_op_internal_call{};
    FF main_sel_op_internal_return{};
    FF main_sel_op_is_static_call{};
    FF main_sel_op_jump{};
    FF main_sel_op_jumpi{};
    FF main_sel_op_keccak{};
    FF main_sel_op_l1_to_l2_msg_exists{};
    FF main_sel_op_l2gasleft{};
    FF main_sel_op_lt{};
    FF main_sel_op_lte{};
    FF main_sel_op_mov{};
    FF main_sel_op_msm{};
    FF main_sel_op_mul{};
    FF main_sel_op_not{};
    FF main_sel_op_note_hash_exists{};
    FF main_sel_op_nullifier_exists{};
    FF main_sel_op_or{};
    FF main_sel_op_poseidon2{};
    FF main_sel_op_radix_be{};
    FF main_sel_op_returndata_copy{};
    FF main_sel_op_returndata_size{};
    FF main_sel_op_sender{};
    FF main_sel_op_set{};
    FF main_sel_op_sha256{};
    FF main_sel_op_shl{};
    FF main_sel_op_shr{};
    FF main_sel_op_sload{};
    FF main_sel_op_sstore{};
    FF main_sel_op_static_call{};
    FF main_sel_op_sub{};
    FF main_sel_op_timestamp{};
    FF main_sel_op_transaction_fee{};
    FF main_sel_op_version{};
    FF main_sel_op_xor{};
    FF main_sel_q_kernel_lookup{};
    FF main_sel_q_kernel_output_lookup{};
    FF main_sel_resolve_ind_addr_a{};
    FF main_sel_resolve_ind_addr_b{};
    FF main_sel_resolve_ind_addr_c{};
    FF main_sel_resolve_ind_addr_d{};
    FF main_sel_returndata{};
    FF main_sel_rng_16{};
    FF main_sel_rng_8{};
    FF main_sel_slice_gadget{};
    FF main_side_effect_counter{};
    FF main_sload_write_offset{};
    FF main_space_id{};
    FF main_sstore_write_offset{};
    FF main_tag_err{};
    FF main_w_in_tag{};
    FF mem_addr{};
    FF mem_clk{};
    FF mem_diff{};
    FF mem_glob_addr{};
    FF mem_last{};
    FF mem_lastAccess{};
    FF mem_one_min_inv{};
    FF mem_r_in_tag{};
    FF mem_rw{};
    FF mem_sel_mem{};
    FF mem_sel_mov_ia_to_ic{};
    FF mem_sel_mov_ib_to_ic{};
    FF mem_sel_op_a{};
    FF mem_sel_op_b{};
    FF mem_sel_op_c{};
    FF mem_sel_op_d{};
    FF mem_sel_op_poseidon_read_a{};
    FF mem_sel_op_poseidon_read_b{};
    FF mem_sel_op_poseidon_read_c{};
    FF mem_sel_op_poseidon_read_d{};
    FF mem_sel_op_poseidon_write_a{};
    FF mem_sel_op_poseidon_write_b{};
    FF mem_sel_op_poseidon_write_c{};
    FF mem_sel_op_poseidon_write_d{};
    FF mem_sel_op_slice{};
    FF mem_sel_resolve_ind_addr_a{};
    FF mem_sel_resolve_ind_addr_b{};
    FF mem_sel_resolve_ind_addr_c{};
    FF mem_sel_resolve_ind_addr_d{};
    FF mem_sel_rng_chk{};
    FF mem_skip_check_tag{};
    FF mem_space_id{};
    FF mem_tag{};
    FF mem_tag_err{};
    FF mem_tsp{};
    FF mem_u16_r0{};
    FF mem_u16_r1{};
    FF mem_u8_r0{};
    FF mem_val{};
    FF mem_w_in_tag{};
    FF merkle_tree_clk{};
    FF merkle_tree_expected_tree_root{};
    FF merkle_tree_latch{};
    FF merkle_tree_leaf_index{};
    FF merkle_tree_leaf_index_is_even{};
    FF merkle_tree_leaf_value{};
    FF merkle_tree_left_hash{};
    FF merkle_tree_output_hash{};
    FF merkle_tree_path_len{};
    FF merkle_tree_path_len_inv{};
    FF merkle_tree_right_hash{};
    FF merkle_tree_sel_merkle_tree{};
    FF merkle_tree_sibling_value{};
    FF poseidon2_B_10_0{};
    FF poseidon2_B_10_1{};
    FF poseidon2_B_10_2{};
    FF poseidon2_B_10_3{};
    FF poseidon2_B_11_0{};
    FF poseidon2_B_11_1{};
    FF poseidon2_B_11_2{};
    FF poseidon2_B_11_3{};
    FF poseidon2_B_12_0{};
    FF poseidon2_B_12_1{};
    FF poseidon2_B_12_2{};
    FF poseidon2_B_12_3{};
    FF poseidon2_B_13_0{};
    FF poseidon2_B_13_1{};
    FF poseidon2_B_13_2{};
    FF poseidon2_B_13_3{};
    FF poseidon2_B_14_0{};
    FF poseidon2_B_14_1{};
    FF poseidon2_B_14_2{};
    FF poseidon2_B_14_3{};
    FF poseidon2_B_15_0{};
    FF poseidon2_B_15_1{};
    FF poseidon2_B_15_2{};
    FF poseidon2_B_15_3{};
    FF poseidon2_B_16_0{};
    FF poseidon2_B_16_1{};
    FF poseidon2_B_16_2{};
    FF poseidon2_B_16_3{};
    FF poseidon2_B_17_0{};
    FF poseidon2_B_17_1{};
    FF poseidon2_B_17_2{};
    FF poseidon2_B_17_3{};
    FF poseidon2_B_18_0{};
    FF poseidon2_B_18_1{};
    FF poseidon2_B_18_2{};
    FF poseidon2_B_18_3{};
    FF poseidon2_B_19_0{};
    FF poseidon2_B_19_1{};
    FF poseidon2_B_19_2{};
    FF poseidon2_B_19_3{};
    FF poseidon2_B_20_0{};
    FF poseidon2_B_20_1{};
    FF poseidon2_B_20_2{};
    FF poseidon2_B_20_3{};
    FF poseidon2_B_21_0{};
    FF poseidon2_B_21_1{};
    FF poseidon2_B_21_2{};
    FF poseidon2_B_21_3{};
    FF poseidon2_B_22_0{};
    FF poseidon2_B_22_1{};
    FF poseidon2_B_22_2{};
    FF poseidon2_B_22_3{};
    FF poseidon2_B_23_0{};
    FF poseidon2_B_23_1{};
    FF poseidon2_B_23_2{};
    FF poseidon2_B_23_3{};
    FF poseidon2_B_24_0{};
    FF poseidon2_B_24_1{};
    FF poseidon2_B_24_2{};
    FF poseidon2_B_24_3{};
    FF poseidon2_B_25_0{};
    FF poseidon2_B_25_1{};
    FF poseidon2_B_25_2{};
    FF poseidon2_B_25_3{};
    FF poseidon2_B_26_0{};
    FF poseidon2_B_26_1{};
    FF poseidon2_B_26_2{};
    FF poseidon2_B_26_3{};
    FF poseidon2_B_27_0{};
    FF poseidon2_B_27_1{};
    FF poseidon2_B_27_2{};
    FF poseidon2_B_27_3{};
    FF poseidon2_B_28_0{};
    FF poseidon2_B_28_1{};
    FF poseidon2_B_28_2{};
    FF poseidon2_B_28_3{};
    FF poseidon2_B_29_0{};
    FF poseidon2_B_29_1{};
    FF poseidon2_B_29_2{};
    FF poseidon2_B_29_3{};
    FF poseidon2_B_30_0{};
    FF poseidon2_B_30_1{};
    FF poseidon2_B_30_2{};
    FF poseidon2_B_30_3{};
    FF poseidon2_B_31_0{};
    FF poseidon2_B_31_1{};
    FF poseidon2_B_31_2{};
    FF poseidon2_B_31_3{};
    FF poseidon2_B_32_0{};
    FF poseidon2_B_32_1{};
    FF poseidon2_B_32_2{};
    FF poseidon2_B_32_3{};
    FF poseidon2_B_33_0{};
    FF poseidon2_B_33_1{};
    FF poseidon2_B_33_2{};
    FF poseidon2_B_33_3{};
    FF poseidon2_B_34_0{};
    FF poseidon2_B_34_1{};
    FF poseidon2_B_34_2{};
    FF poseidon2_B_34_3{};
    FF poseidon2_B_35_0{};
    FF poseidon2_B_35_1{};
    FF poseidon2_B_35_2{};
    FF poseidon2_B_35_3{};
    FF poseidon2_B_36_0{};
    FF poseidon2_B_36_1{};
    FF poseidon2_B_36_2{};
    FF poseidon2_B_36_3{};
    FF poseidon2_B_37_0{};
    FF poseidon2_B_37_1{};
    FF poseidon2_B_37_2{};
    FF poseidon2_B_37_3{};
    FF poseidon2_B_38_0{};
    FF poseidon2_B_38_1{};
    FF poseidon2_B_38_2{};
    FF poseidon2_B_38_3{};
    FF poseidon2_B_39_0{};
    FF poseidon2_B_39_1{};
    FF poseidon2_B_39_2{};
    FF poseidon2_B_39_3{};
    FF poseidon2_B_40_0{};
    FF poseidon2_B_40_1{};
    FF poseidon2_B_40_2{};
    FF poseidon2_B_40_3{};
    FF poseidon2_B_41_0{};
    FF poseidon2_B_41_1{};
    FF poseidon2_B_41_2{};
    FF poseidon2_B_41_3{};
    FF poseidon2_B_42_0{};
    FF poseidon2_B_42_1{};
    FF poseidon2_B_42_2{};
    FF poseidon2_B_42_3{};
    FF poseidon2_B_43_0{};
    FF poseidon2_B_43_1{};
    FF poseidon2_B_43_2{};
    FF poseidon2_B_43_3{};
    FF poseidon2_B_44_0{};
    FF poseidon2_B_44_1{};
    FF poseidon2_B_44_2{};
    FF poseidon2_B_44_3{};
    FF poseidon2_B_45_0{};
    FF poseidon2_B_45_1{};
    FF poseidon2_B_45_2{};
    FF poseidon2_B_45_3{};
    FF poseidon2_B_46_0{};
    FF poseidon2_B_46_1{};
    FF poseidon2_B_46_2{};
    FF poseidon2_B_46_3{};
    FF poseidon2_B_47_0{};
    FF poseidon2_B_47_1{};
    FF poseidon2_B_47_2{};
    FF poseidon2_B_47_3{};
    FF poseidon2_B_48_0{};
    FF poseidon2_B_48_1{};
    FF poseidon2_B_48_2{};
    FF poseidon2_B_48_3{};
    FF poseidon2_B_49_0{};
    FF poseidon2_B_49_1{};
    FF poseidon2_B_49_2{};
    FF poseidon2_B_49_3{};
    FF poseidon2_B_4_0{};
    FF poseidon2_B_4_1{};
    FF poseidon2_B_4_2{};
    FF poseidon2_B_4_3{};
    FF poseidon2_B_50_0{};
    FF poseidon2_B_50_1{};
    FF poseidon2_B_50_2{};
    FF poseidon2_B_50_3{};
    FF poseidon2_B_51_0{};
    FF poseidon2_B_51_1{};
    FF poseidon2_B_51_2{};
    FF poseidon2_B_51_3{};
    FF poseidon2_B_52_0{};
    FF poseidon2_B_52_1{};
    FF poseidon2_B_52_2{};
    FF poseidon2_B_52_3{};
    FF poseidon2_B_53_0{};
    FF poseidon2_B_53_1{};
    FF poseidon2_B_53_2{};
    FF poseidon2_B_53_3{};
    FF poseidon2_B_54_0{};
    FF poseidon2_B_54_1{};
    FF poseidon2_B_54_2{};
    FF poseidon2_B_54_3{};
    FF poseidon2_B_55_0{};
    FF poseidon2_B_55_1{};
    FF poseidon2_B_55_2{};
    FF poseidon2_B_55_3{};
    FF poseidon2_B_56_0{};
    FF poseidon2_B_56_1{};
    FF poseidon2_B_56_2{};
    FF poseidon2_B_56_3{};
    FF poseidon2_B_57_0{};
    FF poseidon2_B_57_1{};
    FF poseidon2_B_57_2{};
    FF poseidon2_B_57_3{};
    FF poseidon2_B_58_0{};
    FF poseidon2_B_58_1{};
    FF poseidon2_B_58_2{};
    FF poseidon2_B_58_3{};
    FF poseidon2_B_59_0{};
    FF poseidon2_B_59_1{};
    FF poseidon2_B_59_2{};
    FF poseidon2_B_59_3{};
    FF poseidon2_B_5_0{};
    FF poseidon2_B_5_1{};
    FF poseidon2_B_5_2{};
    FF poseidon2_B_5_3{};
    FF poseidon2_B_6_0{};
    FF poseidon2_B_6_1{};
    FF poseidon2_B_6_2{};
    FF poseidon2_B_6_3{};
    FF poseidon2_B_7_0{};
    FF poseidon2_B_7_1{};
    FF poseidon2_B_7_2{};
    FF poseidon2_B_7_3{};
    FF poseidon2_B_8_0{};
    FF poseidon2_B_8_1{};
    FF poseidon2_B_8_2{};
    FF poseidon2_B_8_3{};
    FF poseidon2_B_9_0{};
    FF poseidon2_B_9_1{};
    FF poseidon2_B_9_2{};
    FF poseidon2_B_9_3{};
    FF poseidon2_EXT_LAYER_4{};
    FF poseidon2_EXT_LAYER_5{};
    FF poseidon2_EXT_LAYER_6{};
    FF poseidon2_EXT_LAYER_7{};
    FF poseidon2_T_0_4{};
    FF poseidon2_T_0_5{};
    FF poseidon2_T_0_6{};
    FF poseidon2_T_0_7{};
    FF poseidon2_T_1_4{};
    FF poseidon2_T_1_5{};
    FF poseidon2_T_1_6{};
    FF poseidon2_T_1_7{};
    FF poseidon2_T_2_4{};
    FF poseidon2_T_2_5{};
    FF poseidon2_T_2_6{};
    FF poseidon2_T_2_7{};
    FF poseidon2_T_3_4{};
    FF poseidon2_T_3_5{};
    FF poseidon2_T_3_6{};
    FF poseidon2_T_3_7{};
    FF poseidon2_T_60_4{};
    FF poseidon2_T_60_5{};
    FF poseidon2_T_60_6{};
    FF poseidon2_T_60_7{};
    FF poseidon2_T_61_4{};
    FF poseidon2_T_61_5{};
    FF poseidon2_T_61_6{};
    FF poseidon2_T_61_7{};
    FF poseidon2_T_62_4{};
    FF poseidon2_T_62_5{};
    FF poseidon2_T_62_6{};
    FF poseidon2_T_62_7{};
    FF poseidon2_T_63_4{};
    FF poseidon2_T_63_5{};
    FF poseidon2_T_63_6{};
    FF poseidon2_T_63_7{};
    FF poseidon2_a_0{};
    FF poseidon2_a_1{};
    FF poseidon2_a_2{};
    FF poseidon2_a_3{};
    FF poseidon2_b_0{};
    FF poseidon2_b_1{};
    FF poseidon2_b_2{};
    FF poseidon2_b_3{};
    FF poseidon2_clk{};
    FF poseidon2_full_a_0{};
    FF poseidon2_full_a_1{};
    FF poseidon2_full_a_2{};
    FF poseidon2_full_a_3{};
    FF poseidon2_full_b_0{};
    FF poseidon2_full_b_1{};
    FF poseidon2_full_b_2{};
    FF poseidon2_full_b_3{};
    FF poseidon2_full_clk{};
    FF poseidon2_full_end_poseidon{};
    FF poseidon2_full_execute_poseidon_perm{};
    FF poseidon2_full_input_0{};
    FF poseidon2_full_input_1{};
    FF poseidon2_full_input_2{};
    FF poseidon2_full_input_len{};
    FF poseidon2_full_num_perm_rounds_rem{};
    FF poseidon2_full_num_perm_rounds_rem_inv{};
    FF poseidon2_full_output{};
    FF poseidon2_full_padding{};
    FF poseidon2_full_sel_merkle_tree{};
    FF poseidon2_full_sel_poseidon{};
    FF poseidon2_full_start_poseidon{};
    FF poseidon2_input_addr{};
    FF poseidon2_mem_addr_read_a{};
    FF poseidon2_mem_addr_read_b{};
    FF poseidon2_mem_addr_read_c{};
    FF poseidon2_mem_addr_read_d{};
    FF poseidon2_mem_addr_write_a{};
    FF poseidon2_mem_addr_write_b{};
    FF poseidon2_mem_addr_write_c{};
    FF poseidon2_mem_addr_write_d{};
    FF poseidon2_output_addr{};
    FF poseidon2_sel_poseidon_perm{};
    FF poseidon2_sel_poseidon_perm_immediate{};
    FF poseidon2_sel_poseidon_perm_mem_op{};
    FF poseidon2_space_id{};
    FF range_check_alu_rng_chk{};
    FF range_check_clk{};
    FF range_check_cmp_hi_bits_rng_chk{};
    FF range_check_cmp_lo_bits_rng_chk{};
    FF range_check_dyn_diff{};
    FF range_check_dyn_rng_chk_bits{};
    FF range_check_dyn_rng_chk_pow_2{};
    FF range_check_gas_da_rng_chk{};
    FF range_check_gas_l2_rng_chk{};
    FF range_check_is_lte_u112{};
    FF range_check_is_lte_u128{};
    FF range_check_is_lte_u16{};
    FF range_check_is_lte_u32{};
    FF range_check_is_lte_u48{};
    FF range_check_is_lte_u64{};
    FF range_check_is_lte_u80{};
    FF range_check_is_lte_u96{};
    FF range_check_rng_chk_bits{};
    FF range_check_sel_lookup_0{};
    FF range_check_sel_lookup_1{};
    FF range_check_sel_lookup_2{};
    FF range_check_sel_lookup_3{};
    FF range_check_sel_lookup_4{};
    FF range_check_sel_lookup_5{};
    FF range_check_sel_lookup_6{};
    FF range_check_sel_rng_chk{};
    FF range_check_u16_r0{};
    FF range_check_u16_r1{};
    FF range_check_u16_r2{};
    FF range_check_u16_r3{};
    FF range_check_u16_r4{};
    FF range_check_u16_r5{};
    FF range_check_u16_r6{};
    FF range_check_u16_r7{};
    FF range_check_value{};
    FF sha256_clk{};
    FF sha256_input{};
    FF sha256_output{};
    FF sha256_sel_sha256_compression{};
    FF sha256_state{};
    FF slice_addr{};
    FF slice_clk{};
    FF slice_cnt{};
    FF slice_col_offset{};
    FF slice_one_min_inv{};
    FF slice_sel_cd_cpy{};
    FF slice_sel_mem_active{};
    FF slice_sel_return{};
    FF slice_sel_start{};
    FF slice_space_id{};
    FF slice_val{};
    FF perm_rng_cmp_lo_inv{};
    FF perm_rng_cmp_hi_inv{};
    FF perm_rng_alu_inv{};
    FF perm_cmp_alu_inv{};
    FF perm_rng_gas_l2_inv{};
    FF perm_rng_gas_da_inv{};
    FF perm_l2_start_gas_inv{};
    FF perm_da_start_gas_inv{};
    FF perm_l2_end_gas_inv{};
    FF perm_da_end_gas_inv{};
    FF perm_pos_mem_read_a_inv{};
    FF perm_pos_mem_read_b_inv{};
    FF perm_pos_mem_read_c_inv{};
    FF perm_pos_mem_read_d_inv{};
    FF perm_pos_mem_write_a_inv{};
    FF perm_pos_mem_write_b_inv{};
    FF perm_pos_mem_write_c_inv{};
    FF perm_pos_mem_write_d_inv{};
    FF perm_pos2_fixed_pos2_perm_inv{};
    FF perm_slice_mem_inv{};
    FF perm_merkle_poseidon2_inv{};
    FF perm_main_alu_inv{};
    FF perm_main_bin_inv{};
    FF perm_main_conv_inv{};
    FF perm_main_sha256_inv{};
    FF perm_main_pos2_perm_inv{};
    FF perm_main_slice_inv{};
    FF perm_main_mem_a_inv{};
    FF perm_main_mem_b_inv{};
    FF perm_main_mem_c_inv{};
    FF perm_main_mem_d_inv{};
    FF perm_main_mem_ind_addr_a_inv{};
    FF perm_main_mem_ind_addr_b_inv{};
    FF perm_main_mem_ind_addr_c_inv{};
    FF perm_main_mem_ind_addr_d_inv{};
    FF lookup_rng_chk_pow_2_inv{};
    FF lookup_rng_chk_diff_inv{};
    FF lookup_rng_chk_0_inv{};
    FF lookup_rng_chk_1_inv{};
    FF lookup_rng_chk_2_inv{};
    FF lookup_rng_chk_3_inv{};
    FF lookup_rng_chk_4_inv{};
    FF lookup_rng_chk_5_inv{};
    FF lookup_rng_chk_6_inv{};
    FF lookup_rng_chk_7_inv{};
    FF lookup_mem_rng_chk_0_inv{};
    FF lookup_mem_rng_chk_1_inv{};
    FF lookup_mem_rng_chk_2_inv{};
    FF lookup_pow_2_0_inv{};
    FF lookup_pow_2_1_inv{};
    FF lookup_byte_lengths_inv{};
    FF lookup_byte_operations_inv{};
    FF lookup_opcode_gas_inv{};
    FF kernel_output_lookup_inv{};
    FF lookup_into_kernel_inv{};
    FF lookup_cd_value_inv{};
    FF lookup_ret_value_inv{};
    FF incl_main_tag_err_inv{};
    FF incl_mem_tag_err_inv{};
    FF lookup_rng_chk_pow_2_counts{};
    FF lookup_rng_chk_diff_counts{};
    FF lookup_rng_chk_0_counts{};
    FF lookup_rng_chk_1_counts{};
    FF lookup_rng_chk_2_counts{};
    FF lookup_rng_chk_3_counts{};
    FF lookup_rng_chk_4_counts{};
    FF lookup_rng_chk_5_counts{};
    FF lookup_rng_chk_6_counts{};
    FF lookup_rng_chk_7_counts{};
    FF lookup_mem_rng_chk_0_counts{};
    FF lookup_mem_rng_chk_1_counts{};
    FF lookup_mem_rng_chk_2_counts{};
    FF lookup_pow_2_0_counts{};
    FF lookup_pow_2_1_counts{};
    FF lookup_byte_lengths_counts{};
    FF lookup_byte_operations_counts{};
    FF lookup_opcode_gas_counts{};
    FF kernel_output_lookup_counts{};
    FF lookup_into_kernel_counts{};
    FF lookup_cd_value_counts{};
    FF lookup_ret_value_counts{};
    FF incl_main_tag_err_counts{};
    FF incl_mem_tag_err_counts{};

    RefVector<const FF> as_vector() const;

    static std::vector<std::string> names();
    static constexpr size_t SIZE = 773;
};

template <typename FF> std::ostream& operator<<(std::ostream& os, AvmFullRow<FF> const& row);

} // namespace bb