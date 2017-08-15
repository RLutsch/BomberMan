#include "../../abstracts/includes/Object.hpp"

class Bomberman : public Object {
public:
	Bomberman(int x, int y);
	virtual ~Bomberman();
private:
	Bomberman();
	bool	check_block(/*int move_x, int move_y*/);
	void	stay();
};
