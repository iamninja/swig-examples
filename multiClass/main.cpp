#include <iostream>
#include "Circle.h"

int main(int argc, char const *argv[])
{
    Circle *circle = new Circle(3.0, 2, 5);

    circle->_print();
    circle->show_position();

    std::cout << circle->get_radius() << std::endl;

    return 0;
}
