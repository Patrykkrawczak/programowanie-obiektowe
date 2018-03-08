#include "triangle.h"
#include "punkt.h"
#include <cmath>

using namespace std;

    Triangle::Triangle(Punkt x,Punkt y,Punkt z){
    this->x=x;
    this->y=y;
    this->z=z;
    }

    float Triangle::perimeter(){
        return odleglosc(x,y)+odleglosc(x,z)+odleglosc(z,y);



    }

    float Triangle::area() {
        float p=perimeter()*0.5;
        return sqrt(p*(p-odleglosc(x,y))*(p-odleglosc(y,z))*(p-odleglosc(x,z)));
    }


    float Triangle::odleglosc(Punkt a,Punkt b){

        return sqrt(pow(b.getX()-a.getX(),2)+pow(b.getY()-a.getY(),2));

    }

