
#include <stdio.h>
#include "points.h"
#include <math.h>


int main( void ) {

    // complete the structure definition in the header file first
    // implement code for the following
    // include necessary libraries
    
    Point p1 = { .x=1, .y=2 };
    Point p2 = { .x=-2, .y=4 };

    printf(" Distance between (%.1f,%.1f) and (%.1f,%.1f) is %.2f\n", 
             p1.x,p1.y,p2.x,p2.y,distance(p1,p2));
    Point r = reflect(p1);
    Point s = shift(p1, p2);
    printf("Reflected: (%.1f, %.1f)\n", r.x, r.y);
    printf("Shifted: (%.1f, %.1f)\n", s.x, s.y);
    return 0;
}

float distance( Point p, Point q ) {
    // implement distance here

    return sqrt(((q.x - p.x)*(q.x - p.x)) + ((q.y - p.y)*(q.y - p.y)) );

    
}
Point reflect(Point p){
    Point reflected = { .x = p.x, .y = -p.y};


    return reflected;
}
Point shift(Point p, Point dp){
    Point shifted = {.x = p.x + dp.x, .y = p.y + dp.y};
    return shifted;
}