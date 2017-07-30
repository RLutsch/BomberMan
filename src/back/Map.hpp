#include <vector>
#include <string>

class Map {
public:
  std::vector<std::vector> get_map();
  void                     read_and_setup(std::string filename);
private:
  std::vector<std::vector> _map;
}
