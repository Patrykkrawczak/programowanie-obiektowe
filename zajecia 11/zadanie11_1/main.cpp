#include <iostream>
#include <istream>
#include <vector>
using namespace std;

class klasa
{
private:
    int mojaZmienna;
public:
   friend class zapklasa;
   klasa(int mojaZmienna) : mojaZmienna(mojaZmienna)
   {

   }
   void showData()
   {
       cout << mojaZmienna << endl;
   }
   friend void zapfunkcja(klasa & k);
};
class zapklasa
{
public:
    void modify(klasa & k)
    {
        k.mojaZmienna = 0;
    }
};
void zapfunkcja(klasa & k)
{
    k.mojaZmienna = 11;

}
class Point
{

private:
    float x;
    float y;
public:
    Point(float x,float y) : x(x),y(y)
    {}
    float getx()
    {
        return x;
    }
    float gety()
    {
        return y;
    }
    friend class Points;
    friend istream& operator>>(istream& is,Point & p);

};

istream& operator>>(istream& is,Point & p )
{
    return is >> p.x >> p.y;

}
class Points
{
private:
    vector <Point*> tabl;
    int wielkosc;
public:
    Points(Point *p)
    {
        tabl.push_back(p);
        wielkosc++;
    }
    void dodaj(Point *p)
    {
        tabl.push_back(p);
        wielkosc++;
    }


    friend ostream& operator<<(ostream& is,Points & p);

};

ostream& operator<<(ostream& is,Points & p )
{
    for(int i = 0;i<p.wielkosc;i++)
    {
        is<<p.tabl[i]->getx()<< " " <<p.tabl[i]->gety() << " ";
    }
    is<<endl;
    return is;

}


int main(int argc, char *argv[])
{
    klasa k = klasa(3);
    k.showData();
    zapklasa j;
    j.modify(k);
    k.showData();
    zapfunkcja(k);
    k.showData();
    Point a = Point(1,2);
    Point a1=Point(2,3);
    Points x = Points(&a);
    x.dodaj(&a1);
    cout << x;
    return 0;
}
