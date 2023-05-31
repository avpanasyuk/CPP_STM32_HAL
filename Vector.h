#pragma once

/// @cond
#include <array>
/// @endcond

namespace avp {
  template <typename T, std::size_t N>
  class ARM_Vector : public std::array<T, N> {
  public:
    typedef std::array<T, N> array_t;

    ARM_Vector() {}
    ARM_Vector(const std::initializer_list<T> &t): array_t(t) {}
    ARM_Vector(const T &rhs) : Vector<T, N>(rhs) {}
  }; // class ARM_Vector
} // namespace avp

