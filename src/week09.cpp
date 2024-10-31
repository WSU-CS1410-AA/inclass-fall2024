#include <iostream>
#include "2dgraphics.h"

int main(){
  Point p;
  Point q(100, 200);

  p.print();
  std::cout << std::endl;

  q.print();
  q.moveTo(300, 500).print();
  q.moveTo(2, 90).print();
  q.moveTo(100, 200).print();

  return 0;
}