#include "../../abstracts/includes/Object.hpp"
#include "../../abstracts/includes/Object_movable.hpp"

class Bomberman : public Object, public  Object_movable {
public:
	Bomberman(int x, int y, std::vector<std::vector<Object*> > &map);
	void		update();
	char		get_direction();
	virtual		~Bomberman();
private:
	Bomberman();
};
