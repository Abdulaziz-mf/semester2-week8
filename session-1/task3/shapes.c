
#include <stdio.h>
#include "shapes.h"

int main( void ) {
    Point p= {
        .x = 2.5,
        .y=5.6
    };
    Point q = {
        .x = 3.75,
        .y=9.9
    };
    Rectangle rect = makeRectangle( p, 20.0, 40.0 );
    float a = area(rect);
    printf("Area %f\n",a);
    scaleRectangle(&rect);
    shiftRectangle(&rect,q);

    // complete the structure definition in the header file first
    // code in main to test the structures and functions
    
    return 0;
}

Rectangle makeRectangle( Point p, float width, float height ){
    Rectangle r = {
        .p = p,
        .width = width,
        .height = height
    };

    return r;
}

float area( Rectangle r ) {

    float a = r.width * r.height;

    return a;
}

void shiftRectangle( Rectangle *r, Point dp ) {
    r->p.x= r->p.x + dp.x;
    r->p.y = r->p.y + dp.y;


    return;
}

void scaleRectangle( Rectangle *r, float scale ) {
    r->width = r->width * scale;
    r->height = r->height *scale;

    return;
}
