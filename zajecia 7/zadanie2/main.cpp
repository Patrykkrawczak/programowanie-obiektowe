#include <iostream>
#include <cmath>
using namespace std;
class Reguralar_polygon
{
private:
    float bok;
    float pole;
    float wysokosc;
    int ilosc;

protected:
float getbok()
{
    return bok;
}
float getpole()
{
    return pole;
}
float getwysokosc()
{
    return wysokosc;
}
int getilosc()
{
    return ilosc;
}
public:
    virtual void czystowirt()=0;
    Reguralar_polygon(float bok,int ilosc,int h) : bok(bok), ilosc(ilosc),wysokosc(h)
    {

        pole=(bok/2*tan(M_PI/ilosc))*bok*ilosc;
    }

};


int main(int argc, char *argv[])
{
    cout << "Hello World!" << endl;
    return 0;
}
