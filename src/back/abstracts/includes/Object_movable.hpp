#ifndef BOMBERMAN_OBJECT_MOVABLE_HPP
#define BOMBERMAN_OBJECT_MOVABLE_HPP

class Object_movable {
public:
	void	up();
	void	down();
	void	left();
	void	right();
	void	obstacle();
	virtual void update();

protected:
	int		_dir_x;
	int		_dir_y;
};

#endif //BOMBERMAN_OBJECT_MOVABLE_HPP
