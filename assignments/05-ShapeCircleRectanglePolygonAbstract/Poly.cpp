#include "Poly.hpp"

Poly::Poly()
{
    n=0;
    lado=0;
    apotema=0;
}

Poly::Poly(int valn, int vall, int vala)
{
    n=valn;
    lado=vall;
    apotema=vala;
}

int Poly::getn()
{
    return n;
}

int Poly::getlado()
{
    return lado;
}

int Poly::getapotema()
{
    return apotema;
}


std::string Poly::draw()
{
    return "soy un polígono";
}

double Poly::getArea()
{
    return (((lado*n)*apotema)/2);
}