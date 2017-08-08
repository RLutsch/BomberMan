#include "Bomberman.hpp"

bool 	Bomberman::check_block(int move_x, int move_y) {
	if (!_map[_y + move_y][_x + move_x].compare("0") /* || (bomb plant id)*/)
		return true;
	else if (!_map[_y + move_y][_x + move_x].compare("B")/*fire id set killed animation*/)
		return true;
	return false;
}

char	Bomberman::update() {
	//get move from user or ai
	//check if valid direction for the object and act accordingly
	//if status is plant bomb create bomb id(add to observer) and set as leaving block
	//check if move is possible and then move/stay
	switch () {
		case 'u':
			//check block plus 1 y
				//do switch
			break;
		case 'd':
			//-1 y..
			break;
		case 'l':
			//1 x..
			break;
		case 'r':
			//-1 x..
			break;
	}
}
