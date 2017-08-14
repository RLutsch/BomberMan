#include "includes/Map.hpp"
#include <iostream>

std::vector<std::vector<std::string> >  Map::get_map() {
  return _map;
}

void Map::read_and_setup(std::string filename) {
	std::string               line;
	std::ifstream             file(filename, std::ifstream::in);
	while (std::getline(file, line, '\t')) {
		//factory that creates objects for the different sections.
	}
}
