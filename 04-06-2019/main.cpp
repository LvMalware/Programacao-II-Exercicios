#include <iostream>
#include "matriz.h"
using std::cout;
using std::cin;
using std::endl;
int
main(int argc, char **argv)
{
  Matrix m(3), n(3);
  m.randomFill();
  m.show();
  n.randomFill();
  n.show();
  m.add(n);
  m.show();
  return 0;
}
