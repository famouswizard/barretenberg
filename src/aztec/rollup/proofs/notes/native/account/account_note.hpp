#pragma once
#include <ecc/curves/grumpkin/grumpkin.hpp>
#include <crypto/pedersen/pedersen.hpp>
#include "../../constants.hpp"

namespace rollup {
namespace proofs {
namespace notes {
namespace native {
namespace account {

struct account_note {
    barretenberg::fr account_alias_id;
    grumpkin::g1::affine_element owner_key;
    grumpkin::g1::affine_element signing_key;

    auto commit() const
    {
        return crypto::pedersen::compress_native({ account_alias_id, owner_key.x, signing_key.x },
                                                 GeneratorIndex::ACCOUNT_NOTE_COMMITMENT);
    }
};

} // namespace account
} // namespace native
} // namespace notes
} // namespace proofs
} // namespace rollup