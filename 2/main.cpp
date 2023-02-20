#include "point.hpp"

double Point::distance(Point* q){
    double _d = sqrt(pow(q->getX() - _x, 2) + pow(q->getY() - _y, 2));
    return _d;
}

int main(int argc, char** argv) {
	double d = -1.0;
    Point **p;
    Point *f, *s;
    int x, y;
    int i, j;
    if (argc < 3) return -1;
    p = new Point*[argc];
    for (i = 1, j = 0; i < argc; i++, j++){
        sscanf(argv[i],"%d%*c%d", &x, &y);
        p[j] = new Point(x, y);
    }
    for (i = 0; i < argc-1; i++){
        for (j = i+1; j < argc - 1; j++){
            double dis = p[i]->distance(p[j]);
            if (dis > d){
                d = dis;
                f = p[i];
                s = p[j];
            }
        }
    }
    printf("The longest distance is between points with coordinates (%d;%d) and (%d;%d) - %f\n", f->getX(), f->getY(), s->getX(), s->getY(), d);
    for (i = 0; i < argc-1; i++){
        delete p[i];
    }
    delete []p;
}
