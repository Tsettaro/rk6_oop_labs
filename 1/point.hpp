class Point {
	private:
		float x, y;
		Point (float _x, float _y): x(_x),y(_y) {};
	public:
		Point(): x(0), y(0) {};
		float getX() {return x;}
		float getY() {return y;}
		// Статический метод класса
		static Point polar(float, float); 
};