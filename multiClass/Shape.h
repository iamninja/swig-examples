#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>

class Shape
{
    private:
        double x;
        double y;
        
    public:
        Shape(double x, double y);

        // declare them as pure
        virtual double perimeter() = 0;
        virtual double area() = 0;

        void set_position(double x, double y);
        void show_position();

        void _print();
};

#endif // SHAPE_H