#include <cmath>
#include "Shape.h"

class Circle : public Shape
{
    private:
        double radius;
    public:
        Circle(double radius, double x, double y);

        double perimeter();
        double area();

        void set_radius(double r);
        double get_radius();
};