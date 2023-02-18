#include <iostream>
#include <cmath>
#include <cstdio>

class Point {
	private:
		int x, y;
	public:
		Point (int _x, int _y): x(_x),y(_y) {};
		Point(): x(0), y(0) {};
		int getX() {return x;}
		int getY() {return y;}
		friend double distance(Point*, Point*);
};