#include "includes/Object_movable.hpp"

void Object_movable::direction() {
	switch (get_direction()) {
		case 'u':
			up();
			break;
		case 'd':
			down();
			break;
		case 'l':
			left();
			break;
		case 'r':
			right();
			break;
		default:
			stay();
	}
}

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

void	Object_movable::stay() {
	_dir_x = 0;
	_dir_y = 0;
}

void	Object_movable::obstacle(std::string id) {
	if (!id.compare("w")) {
		stay();
	}
}

void Object_movable::update() {
	direction();
	obstacle(_map[]);
}