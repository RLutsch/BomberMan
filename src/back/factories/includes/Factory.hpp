#ifndef BOMBERMAN_FACTORY_HPP
#define BOMBERMAN_FACTORY_HPP

#include "Object_factory.hpp"

class Factory : public Object_factory {
public:
	Object *create_object(std::string key);
};

#endif //BOMBERMAN_FACTORY_HPP