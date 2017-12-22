/*
Passing variables / arrays between cython and cpp
Example from
http://docs.cython.org/src/userguide/wrapping_CPlusPlus.html

Adapted to include passing of multidimensional arrays

*/

#include "Rectangle.h"

using namespace shapes;

Rectangle::Rectangle(int X0, int Y0, int X1, int Y1) {
    x0 = X0;
    y0 = Y0;
    x1 = X1;
    y1 = Y1;
}


int Rectangle::getLength() {
    return (x1 - x0);
}

Rectangle::~Rectangle()
{

}

Rectangle Rectangle::operator+(const Rectangle & target) {
    return Rectangle(x0+target.x0, y0+target.y0,x1+target.x1,y1+target.y1);
}

Rectangle operator-(const Rectangle & left,const Rectangle & right) {
    return Rectangle(left.x0 - right.x0,
                     left.y0-right.y0,
                     left.x1-right.x1,
                     left.y1-right.y1);
}
