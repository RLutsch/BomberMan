#include "includes/Factory.hpp"
#include "../objects/includes/Bomberman.hpp"

        #include <iostream>

Object	*Factory::create_object(std::string key, int x, int y) {
	if (key[0] == 'A') {
        return new Bomberman(x, y);
    }
	return nullptr;
}
