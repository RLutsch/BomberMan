#include "Map.hpp"

std::vector<std::vector<std::string> >  Map::get_map() {
  return _map;
}

void Map::read_and_setup(std::string filename) {
  std::string               line;
  std::string               temp;
  std::ifstream             file(filename, std::ifstream::in);

  while (std::getline(file, line)) {
    std::istringstream  stream(line);
    std::vector<std::string>  x;

    for (int i = 0; stream; i++) {
      std::getline(stream, temp, '\t');
      x.push_back(temp);
    }
    _map.push_back(x);
  }
}
