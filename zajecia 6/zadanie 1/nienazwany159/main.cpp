#include <iostream>
#include <cmath>
#include "punkt.h"
using namespace std;

class point3d :public pt :: point
{
private:
    int z;
public:
    point3d()
    {
        this->ustawxy(0,0);
        z=0;
    }
    point3d(int x,int y,int z)
    {
        this->ustawxy(x,y);
        this->z=z;
    }


};

class polygon
{
private:
    pt::point **tab;
    int rozmiar;
public:
    polygon(int rozmiar)
    {
        for(int i=0;i<rozmiar;i++)
        {
            tab[i]=new pt::point;


        }
    }
    void changept(int i,pt::point a)
    {
        *tab[i]=a;
    }
    static polygon triangle(pt::point a,pt::point b,pt::point c)
    {
        polygon *nowy = new polygon(3);
        nowy->changept(0,a);
        nowy->changept(1,b);
        nowy->changept(2,c);
        return *nowy;



    }
    static polygon rectangle(pt::point a,pt::point b,pt::point c,pt::point d)
    {
        double cx=(a.getx()+b.getx()+c.getx()+d.getx())/4;
        double cy=(a.gety()+b.gety()+c.gety()+d.gety())/4;
        double dd1 = sqrt(cx-a.getx()) + sqrt(cy-a.gety());
        double dd2 = sqrt(cx-b.getx()) + sqrt(cy-b.gety());
        double dd3 = sqrt(cx-c.getx()) + sqrt(cy-c.gety());
        double dd4 = sqrt(cx-d.getx()) + sqrt(cy-d.gety());
        if(dd1==dd2 && dd1==dd3 && dd1==dd4 )
        {
        polygon *nowy = new polygon(4);
        nowy->changept(0,a);
        nowy->changept(1,b);
        nowy->changept(2,c);
        nowy->changept(3,d);
        return *nowy;
        }else
        {
            return nullptr;
        }


    }

};

class Account
{
private:
    int id;
    string nazwa;
public:
    Account(string nazwa) : nazwa(nazwa)
    {
        id = acc::zwrocid();
    }
    int getidid()
    {
        return id;
    }
    string getnazwa()
    {
        return nazwa;
    }





};



int main(int argc, char *argv[])
{

    pt::point nowy;

    return 0;
}
