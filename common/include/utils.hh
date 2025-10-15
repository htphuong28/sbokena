#pragma once

#include <concepts>

namespace sbokena::utils {

// a 2D cardinal direction.
enum struct Direction { Up, Down, Left, Right };

template <std::integral T>
struct Position {
  T x;
  T y;
};

} // namespace sbokena::utils