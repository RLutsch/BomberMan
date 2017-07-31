#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

class Map {
public:
  std::vector<std::vector<std::string>> get_map();
  void                     read_and_setup(std::string filename);
private:
  std::vector<std::vector<std::string>> _map;
};
