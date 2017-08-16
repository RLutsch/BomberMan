#ifndef BOMBERMAN_OBJECT_MOVABLE_HPP
#define BOMBERMAN_OBJECT_MOVABLE_HPP

#include <iostream
#include "Object.hpp"

class Object_movable {
public:
	virtual char	get_direction() = 0;
	void			direction();
	void			obstacle(std::string id);
	void			update();


protected:
	int				_dir_x;
	int				_dir_y;


private:
	void			_up();
	void			_down();
	void			_left();
	void			_right();
	void			_stay();

};

#endif //BOMBERMAN_OBJECT_MOVABLE_HPP
