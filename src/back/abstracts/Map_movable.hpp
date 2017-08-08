class Map_movable {
public:
	void			set_map(std::vector<std::vector<std::string> > &map);
	virtual void	update() = 0;
protected:
	std::vector<std::vector<std::string> >	& _map;
	int										_dir_x;
	int										_dir_y;
};
