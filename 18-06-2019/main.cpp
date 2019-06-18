#include <iostream>
#include "rectangle.h"
using std::cin;
using std::cout;
using std::endl;
int
main()
{
    int x, y, w, h;
    cin >> x;
    cin >> y;
    cin >> w;
    cin >> h;
    Rectangle r(x, y, w, h);
    r.drawInScreen();
    cout<<"Area : "<<r.getArea()<<endl;
    cout<<"Perimetro : "<<r.getPerimeter()<<endl;
    cout<<"Largura : "<<r.getWidth()<<endl;
    cout<<"Altura : "<<r.getHeight()<<endl;
    return 0;
}