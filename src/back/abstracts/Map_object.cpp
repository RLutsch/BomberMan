#include "Map_object.hpp"

void Map_object::set_cor(int x, int y) {
  _x = x;
  _y = y;
}

int Map_object::get_id() {
  return _id;
}

int Map_object::get_state() {
  return _state;
}

bool Map_object::is_x_y(x, y) {
  if (_x == x && _y == y)
    return true;
  return false;
}
