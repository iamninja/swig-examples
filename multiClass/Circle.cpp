#include "Circle.h"

Circle::Circle(double r, double x, double y) : Shape(x, y)
{
    radius = r;
}

double Circle::perimeter()
{
    return (2 * M_PI * radius);
}

double Circle::area()
{
    return (M_PI * radius * radius);
}

void Circle::set_radius(double r)
{
    radius = r;
}

double Circle::get_radius()
{
    return radius;
}

