#ifndef BOMBERMAN_OBJECT_FACTORY_HPP
#define BOMBERMAN_OBJECT_FACTORY_HPP

#include "../../abstracts/includes/Object.hpp"
#include <string>

class Object_factory {
public:
	virtual Object	*create_object(std::string key, int x, int y) = 0;
};

#endif //BOMBERMAN_OBJECT_FACTORY_HPP
