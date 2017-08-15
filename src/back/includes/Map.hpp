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
  std::vector<std::vector<std::string> >	get_map();
  void                     					read_and_setup(std::string filename);
private:
  std::vector<std::vector<std::string> > _map;
};
