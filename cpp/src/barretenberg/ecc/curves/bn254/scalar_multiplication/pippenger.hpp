#pragma once
#include "./scalar_multiplication.hpp"
#include "barretenberg/common/mem.hpp"
#include "barretenberg/common/thread.hpp"

namespace barretenberg {
namespace scalar_multiplication {

inline size_t point_table_size(size_t num_points)
{
    const size_t num_threads = get_num_cpus_pow2();
    const size_t prefetch_overflow = 16 * num_threads;

    return 2 * num_points + prefetch_overflow;
}

template <typename T> inline size_t point_table_buf_size(size_t num_points)
{
    return sizeof(T) * point_table_size(num_points);
}

template <typename T> inline T* point_table_alloc(size_t num_points)
{
    return (T*)aligned_alloc(64, point_table_buf_size<T>(num_points));
}

class Pippenger {
  public:
    /**
     * Expects points to be buffer of size as per point_table_size().
     * Expects the points buffer to be in big-endian form.
     * The crs undergoes a byteswap, and then the point table is generated.
     */
    Pippenger(g1::affine_element* points, size_t num_points);

    /**
     * Will create a new buffer as per point_table_size(), and will copy points into it.
     * Expects the points buffer to be in big-endian form.
     * The crs undergoes a byteswap, and then the point table is generated.
     */
    Pippenger(uint8_t const* points, size_t num_points);

    Pippenger(std::string const& path, size_t num_points);

    ~Pippenger();

    g1::element pippenger_unsafe(fr* scalars, size_t from, size_t range);

    g1::affine_element* get_point_table() const { return monomials_; }

    size_t get_num_points() const { return num_points_; }

  private:
    g1::affine_element* monomials_;
    size_t num_points_;
};

} // namespace scalar_multiplication
} // namespace barretenberg
