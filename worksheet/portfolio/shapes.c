
#include <stdbool.h>
#include <math.h>

#include "shapes.h"

Point makePoint( float x, float y ) {
    Point p;
    p.x = x;
    p.y = y;
    
    return p;
}
Line makeLine(Point p1, Point p2){
    Line l;
    l.p[0] = p1;
    l.p[1] = p2;

    return l;
}
Triangle makeTriangle(Point p1, Point p2, Point p3){
    Triangle t;
    t.p[0] = p1;
    t.p[1] = p2;
    t.p[2] = p3;
    
    return t;
}

float lineLength (Line l){
    float linex = l.p[1].x - l.p[0].x;
    float liney = l.p[1].y - l.p[0].y;
    float length = sqrt((linex * linex) + (liney * liney));
    return length;
}
float triangleArea( Triangle t){
    float tx1 = t.p[0].x;
    float ty1 = t.p[0].y;

    float tx2 = t.p[1].x;
    float ty2 = t.p[1].y;
    
    float tx3 = t.p[2].x;
    float ty3 = t.p[2].y;

    float area = 0.5*fabs((tx1*(ty2-ty3) + tx2*(ty3 - ty1) + tx3*(ty1-ty2)));

    return area;
}

bool samePoint(Point p1, Point p2){
    Line l = makeLine(p1,p2);
    return fabs(lineLength(l)) <1.0e-6;
}

bool pointInLine( Point p, Line l){
    return samePoint(p,l.p[0]) || samePoint(p, l.p[1]);
}

bool pointInTriangle(Point p, Triangle t){
    return samePoint(p, t.p[0]) || samePoint(p,t.p[1]) || samePoint(p, t.p[2]);
}


