#include "../abstracts/Map_object.hpp"
#include "../abstracts/Map_movable.hpp"

class Bomberman: public Map_object, public Map_moveable {
private:
	bool	check_block(int move_x, int move_y);
	void	stay();
};
