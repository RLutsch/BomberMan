#ifndef BOMBERMAN_OBJECT_MOVABLE_HPP
#define BOMBERMAN_OBJECT_MOVABLE_HPP

class Object_movable {
public:
	virtual char	get_direction() = 0;
	virtual void	update() = 0;
	void			up();
	void			down();
	void			left();
	void			right();
	bool			obstacle();

protected:
	int		_dir_x;
	int		_dir_y;
};

#endif //BOMBERMAN_OBJECT_MOVABLE_HPP
