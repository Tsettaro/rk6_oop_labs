#include "point.hpp"

double distance(Point* p, Point* q){
    double _d = sqrt(pow(q->getX() - p->getX(), 2) + pow(q->getY() - p->getY(), 2));
    return _d;
}

int main(int argc, char** argv) {
	double d = -1.0;
    Point **p;
    Point *f, *s;
    int x, y;
    if (argc < 3) return -1;
    p = new Point*[argc];
    for (int i = 1; i < argc; i++){
        sscanf(argv[i],"%d%*c%d", &x, &y);
        p[i-1] = new Point(x, y);
    }
    for (int i = 0; i < argc-1; i++){
        for (int j = i+1; j < argc - 1; j++){
            double dis = distance(p[i], p[j]);
            if (dis > d){
                d = dis;
                f = p[i];
                s = p[j];
            }
        }
    }
    printf("Long distance is between points with coordinates (%d;%d) and (%d;%d) - %2f", f->getX(), f->getY(), s->getX(), s->getY(), d);

}
