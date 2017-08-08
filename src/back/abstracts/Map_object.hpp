class Map_object {
public:
  virtual void  hit(id) = 0;
  void          set_cor(int x, int y);
  int           get_id();
  int           get_state();
  bool          is_x_y(int x, int y);
protected:
  int   _x;
  int   _y;
  int   _id;
  int   _state;
};
