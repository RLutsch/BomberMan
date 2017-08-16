#include "includes/Bomberman.hpp"

	#include <iostream>

Bomberman::Bomberman(int x, int y, std::vector<std::vector<Object*> > &map) {
	std::cout << "Bomberman has been born!!!" << std::endl;
	_x = x;
	_y = y;
	_xp = &_x;
	_yp = &_y;
	_map = &map;
	_id = "A";
	std::cout << "x and y have been set (" << _x << ", " << _y << ")" << std::endl;
}

Bomberman::~Bomberman() {
}

char Bomberman::get_direction() {
	//user input
	return '\0';
}

//char	Bomberman::update() {
//	//get move from user or ai
//	//check if valid direction for the object and act accordingly
//	//if status is plant bomb create bomb id(add to observer) and set as leaving block
//	//check if move is possible and then move/_stay
//}
