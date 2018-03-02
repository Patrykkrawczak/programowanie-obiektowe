#include <iostream>
#include <cmath>

#include <punkt.h>
using namespace std;






int main(int argc,char *argv[])
{
    Punkt p = Punkt(0.0,0.0);
    Punkt p1 = Punkt(3.0,4.0);
    cout<<p.getX()<<"\t"<<p.getY()<<"\t"<<odleglosc(p,p1) <<endl;

};
