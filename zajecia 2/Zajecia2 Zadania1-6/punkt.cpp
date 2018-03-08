#include "punkt.h"
using namespace std;

    Punkt::Punkt(float x,float y)
    {
        this->x=x;
        this->y=y;
    }
    Punkt::Punkt(float x)
    {
        this->x=x;
        y=0.0;
    }
    void Punkt::setX(float x)
    {
        this->x=x;
    }
    void Punkt::setY(float y)
    {
        this->y=y;
    }
    void Punkt::setXY(float x,float y)
    {
        this->x=x;
        this->y=y;
    }
    float Punkt::getX(){

        return x;

    }
    float Punkt::getY(){

        return y;

    }
    void Punkt::move2(Punkt p1)
    {
        x+=p1.getX();
        y+=p1.getY();


    }
    void Punkt::move1(float x,float y)
    {
        this->x+=x;
        this->y+=y;


    }










