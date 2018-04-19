#include <iostream>
#include <cmath>
using namespace std;

class polygon
{
    virtual float circ() =0;
};
namespace poly {
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
class ReguralPiramid : public Reguralar_polygon
{

    void czystowirt() override;
    float volume()
    {
        return this->getpole()*this->getwysokosc()/3;
    }
};
class ReguralPrism : public Reguralar_polygon
{

    void czystowirt() override;
    float volume()
    {
        return this->getpole()*this->getwysokosc();
    }
};
}


int main(int argc, char *argv[])
{
    cout << "Hello World!" << endl;
    return 0;
}
