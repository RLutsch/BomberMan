#include "includes/Object_movable.hpp"

void	Object_movable::up() {
	_dir_x = 0;
	_dir_y = -1;
}

void	Object_movable::down() {
	_dir_x = 0;
	_dir_y = 1;
}

void	Object_movable::left() {
	_dir_x = -1;
	_dir_y = 0;
}

void	Object_movable::right() {
	_dir_x = 1;
	_dir_y = 0;
}

void	Object_movable::obstacle(std::string id) {
	if (!id.compare("w")) {
		_dir_x = 0;
		_dir_y = 0;
	}
}