#include "includes/Map.hpp"
#include <iostream>

std::vector<std::vector<std::string> >  Map::get_map() {
  return _map;
}

void Map::read_and_setup(std::string filename) {
	std::string               line;
    std::string               temp;
	std::ifstream             file(filename, std::ifstream::in);

    for (int y = 0; std::getline(file, line); y++) {
        std::istringstream  stream(line);
        for (int x = 0; std::getline(stream, temp, '\t'); x++) {
            Object_factory  *factory = new Factory;
            Object          *obj = factory->create_object(temp, x, y);
			if (obj	!= nullptr) {
				obj->get_x();
				obj->get_y();
			}
        }
    }
}
