#include <iostream>
#include "2dgraphics.h"

Point::Point():x(0), y(0){}

Point::Point(int x, int y): x(x), y(y){}

Point& Point::moveTo(int x, int y){
  this->x = x;
  this->y = y;

  return *this;
}

const Point& Point::print() const{
  std::cout << '(' << x << ',' << y << ')';

  return *this;
}

Point::~Point(){}

