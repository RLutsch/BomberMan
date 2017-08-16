#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#include "../factories/includes/Object_factory.hpp"
#include "../factories/includes/Factory.hpp"
#include "../abstracts/includes/Object.hpp"

class Map {
public:
	void                     				read_and_setup(std::string filename);
	void									read_map();
private:
  std::vector<std::vector<Object*> >	_map;
};
