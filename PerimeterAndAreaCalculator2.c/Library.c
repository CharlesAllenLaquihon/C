#include <stdio.h>
#include "Library.h"


float SquareArea(int side){
    return (float)(side * side);
}

float SquarePerimeter(int side) {
    return (float)(4 * side);
}

float RectangleArea(int length, int width) {
    return (float)(length * width);
}

float RectanglePerimeter(int length, int width) {
    return (float)(2 * (length + width));
}

float CircleArea(int radius) {
    return (float)((22.0 / 7.0) * radius * radius);
}

float CirclePerimeter(int radius) {
    return (float)(2 * (22.0 / 7.0) * radius);
}

float TriangleArea(int side1, int side2, int side3) {
    float s = (side1 + side2 + side3) / 2.0;
    return (float)sqrt(s * (s - side1) * (s - side2) * (s - side3));
}

float TrianglePerimeter(int side1, int side2, int side3) {
    return (float)(side1 + side2 + side3);

}