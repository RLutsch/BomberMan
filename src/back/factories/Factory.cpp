#include "includes/Factory.hpp"
#include "../objects/includes/Bomberman.hpp"

Object	*Factory::create_object(std::string key) {
	if (key[0] == 'A')
		return new Bomberman;
	return nullptr;
}
