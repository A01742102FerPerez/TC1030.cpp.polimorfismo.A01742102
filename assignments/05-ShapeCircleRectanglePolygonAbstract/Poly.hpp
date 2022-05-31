#pragma once

#include "Shape.hpp"

class Poly:public Shape
{
private:
    int n;
    int lado;
    int apotema;
public:
    Poly();
    Poly(int, int, int);
    int getn();
    int getlado();
    int getapotema();

    std::string draw() override;
    double getArea() override;
};