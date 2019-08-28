#include "Shape.h"

Shape::Shape(double x_pos, double y_pos)
{
    x = x_pos;
    y = y_pos;
}

void Shape::set_position(double x_pos, double y_pos)
{
    x = x_pos;
    y = y_pos;
}

void Shape::show_position()
{
    std::cout << "x: " << x << ", y: " << y << std::endl;
}

void Shape::_print()
{
    std::cout << "This is a shape..." << std::endl;
}
