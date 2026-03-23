#include <stdio.h>
#include <stdbool.h>

#include "shapes.h"

int main(void) {

    Point p1 = makePoint(0.0, 0.0);
    Point p2 = makePoint(1.0, 0.0);
    Point p3 = makePoint(0.0, 1.0);
    Point p4 = makePoint(1.0, 1.0);

    printf("Point p1: (%f, %f)\n", p1.x, p1.y);


    printf("samePoint(p1, p1): %d\n", samePoint(p1, p1)); // should be 1
    printf("samePoint(p1, p2): %d\n", samePoint(p1, p2)); // should be 0

    Line l = makeLine(p1, p2);

    float len = lineLength(l);
    printf("Line length (p1->p2): %f\n", len); // should be 1.0

    printf("pointInLine(p1, l): %d\n", pointInLine(p1, l)); // 1
    printf("pointInLine(p3, l): %d\n", pointInLine(p3, l)); // 0


    Triangle t = makeTriangle(p1, p2, p3);

    float area = triangleArea(t);
    printf("Triangle area: %f\n", area); // should be 0.5


    printf("pointInTriangle(p1, t): %d\n", pointInTriangle(p1, t)); // 1
    printf("pointInTriangle(p4, t): %d\n", pointInTriangle(p4, t)); // 0

    return 0;
}