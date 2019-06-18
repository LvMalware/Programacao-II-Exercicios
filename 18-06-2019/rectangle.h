#ifndef _RECTANGLE_H
#define _RECTANGLE_H 1

#include <iostream>
#include "math.h"

class Rectangle
{
    private:
    int X, Y, width, height;
    int
    distance(int x0, int y0, int x1, int y1)
    {
        return (int) sqrt(pow(x0 - x1, 2) + pow(y0 - y1, 2));
    }
    public:
    Rectangle(int x, int y, int w, int h)
    {
        setX(x);
        setY(y);
        setWidth(w);
        setHeight(h);
    }
    Rectangle(int x0, int y0, int x1, int y1, int x2, int y2, int x3, int y3)
    {
        /*   (x0, y0) is the first point, (x1, y1) is the point at right/left   */
        setX(x0);
        setY(y0);
        setWidth(distance(x0, y0, x1, y1));
        setHeight(distance(x0, y0, x2, y2));

    }
    
    int
    getX()
    {
        return X;
    }
    int
    getY()
    {
        return Y;
    }
    void
    setX(int x)
    {
        X = x;
    }
    void
    setY(int y)
    {
        Y = y;
    }
    void
    setWidth(int w)
    {
        width = w;
    }
    void
    setHeight(int h)
    {
        height = h;
    }
    int
    getWidth()
    {
        return width;
    }
    int
    getHeight()
    {
        return height;
    }
    int
    getArea()
    {
        return width * height;
    }
    int
    getPerimeter()
    {
        return width * 2 + height * 2;
    }
    int
    isInternal(int x, int y)
    {
        /*  Returns 0 if the point (x, y) is above the border
                    1 if the point (x, y) is inside
                and -1 if the point (x, y) is outside */
        if ((x < X) || (x > (X + width))){
            return -1;
        }
        if ((y < Y) || (y > (Y + height)))
            return -1;
        if ((x >= X && (x<= (X + width))) && (y >= Y && (y<=Y+height)))
            return 1;
        return 0;
    }

    void
    drawInScreen()
    {
        for (int i = 0; i<width; i++)
            std::cout << "- ";
        std::cout << std::endl;
        for (int i=0; i < height; i++){
            std::cout << "|";
            for (int i = 0; i< 2*width-2; i++)
                std::cout << " ";
            std::cout << "|";
            std::cout << std::endl;
        } 
        for (int i = 0; i<width; i++)
            std::cout << "- ";
        std::cout << std::endl;
    }
};
#endif