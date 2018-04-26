#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <algorithm>
#include <random>
#include <ctime>
using namespace std;

class Point
{


public:
    float x;
    float y;
Point(float x,float y) : x(x),y(y){}
Point() : x(0),y(0){}
float getx()
{
    return x;
}
float gety()
{
    return y;
}
void setxy(float x,float y)
{
    this->x=x;
    this->y=y;
}
};

bool sortowanie(Point *a,Point *b)
{
return a->x < b->x;
}


vector <Point> srtowanie(vector <Point> prostokat,Point a,Point b)
{
    vector <Point> posortowany;
for(int i=0;i<prostokat.size();i++)
{

    if(prostokat[i].x > a.x && prostokat[i].x<b.x && prostokat[i].y > a.y && prostokat[i].y<b.y)
    {

        posortowany.push_back(prostokat[i]);
    }
}

return posortowany;
}

void funkcja(list <string> :: iterator it,list <string> :: iterator it2)
{
    for(list<string>::iterator it3=it;it3!=it2;it3++)
    {
        cout << *it3 << endl;
    }
}



int main(int argc, char *argv[])
{
    list <string> tab;
    tab.push_back("ala");
    tab.push_back(" MA ");
    tab.push_back("KOTA");
    funkcja(tab.begin(),tab.end());
    return 0;

}

