#ifndef BOMBERMAN_OBJECT_HPP
#define BOMBERMAN_OBJECT_HPP

class Object {
public:
	Object(void);
	virtual	~Object(void);

	int	get_x();
	int	get_y();

protected:
	int
			_x;
	int		_y;

private:
	Object(Object const & src);
	Object &	operator=(Object const & src);
};

#endif //BOMBERMAN_OBJECT_HPP
