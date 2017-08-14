#include "includes/Bomberman.hpp"

Bomberman::Bomberman() {
}

Bomberman::~Bomberman() {
}

bool 	Bomberman::check_block(/*int move_x, int move_y*/) {
//	if (!_map[_y + move_y][_x + move_x].compare("0") /* || (bomb plant id)*/)
//		return true;
//	else if (!_map[_y + move_y][_x + move_x].compare("B")/*fire id set killed animation*/)
//		return true;
	return false;
}

void	Bomberman::stay() {
//	_dir_x = 0;
//	_dir_y = 0;
}

//char	Bomberman::update() {
//	//get move from user or ai
//	//check if valid direction for the object and act accordingly
//	//if status is plant bomb create bomb id(add to observer) and set as leaving block
//	//check if move is possible and then move/stay
//	switch () {
//		case 'u':
//			_dir_y = -1;
//			break;
//		case 'd':
//			_dir_y = 1;
//			break;
//		case 'l':
//			_dir_x = -1;
//			break;
//		case 'r':
//			_dir_x = 1;
//			break;
//		default:
//			stay();
//	}
//	if (!_map[y + _dir_y][_x + _dir_x].compare("w") || !_map[y + _dir_y][_x + _dir_x].compare("S")) {
//		stay();
//	}
//}
