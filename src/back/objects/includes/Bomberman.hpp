#include "../../abstracts/includes/Object.hpp"

class Bomberman : public Object {
public:
	Bomberman();
	virtual ~Bomberman();
private:
	bool	check_block(/*int move_x, int move_y*/);
	void	stay();
};
