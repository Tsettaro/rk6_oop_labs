class Point {
	private:
		float _x, _y;
		Point (float x, float y): _x(x),_y(y) {};
	public:
		Point(): _x(0), _y(0) {};
		float getX() {return _x;}
		float getY() {return _y;}
		// Статический метод класса
		static Point polar(float, float); 
};