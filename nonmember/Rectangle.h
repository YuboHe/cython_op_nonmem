/*
Passing variables / arrays between cython and cpp
Example from
http://docs.cython.org/src/userguide/wrapping_CPlusPlus.html

Adapted to include passing of multidimensional arrays

*/

/* #include <vector> */
/* #include <iostream> */

namespace shapes {
class Rectangle {
  public:
    int x0, y0, x1, y1;
    Rectangle(int x0=0, int y0=0, int x1=0, int y1=0);
    ~Rectangle();
    int getLength();
    Rectangle operator+(const Rectangle& target);
    friend Rectangle operator-(const Rectangle & left, const Rectangle & right);
};
}
