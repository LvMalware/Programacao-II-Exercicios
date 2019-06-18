#include <iostream>
#include "complex.h"

using std::ostream;
using std::cout;
using std::endl;

/*ostream
operator<<(ostream &out, Complex &cpx)
{
  out<<cpx.toString();
  return out;
  }*/

int
main()
{
  Complex x(3, 2), y(2, 2);
  cout<<x.toString()<<endl;
  cout<<y.toString()<<endl;
  return 0;
}
