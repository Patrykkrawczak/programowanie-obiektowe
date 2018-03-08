#ifndef TRIANGLE_H
#define TRIANGLE_H
#include punkt.h

class Triangle
{
private:
    Punkt x,y,z;
public:
    Triangle(Punkt x,Punkt y,Punkt z);
    float perimeter();
    float area();

    float odleglosc(Punkt a,Punkt b);
};

#endif // TRIANGLE_H
