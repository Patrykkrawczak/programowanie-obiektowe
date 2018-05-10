#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class vec3
{
private:
    float x;
    float y;
    float z;
public:
    void setxyz(float x,float y,float z)
    {
        this->x=x;
        this->y=y;
        this->z=z;
    }
    float getx()
    {
        return x;
    }
    float gety()
    {
        return y;
    }
    float getz()
    {
        return z;
    }
    vec3 operator +(vec3 &other)
    {
        vec3 nowy;
        nowy.setxyz(this->x+other.getx(),this->y+other.gety(),this->z+other.getz());
        return nowy;
    }
    vec3 operator -(vec3 &other)
    {
        vec3 nowy;
        nowy.setxyz(this->x-other.getx(),this->y-other.gety(),this->z-other.getz());
        return nowy;
    }
    vec3 operator +=(vec3 &other)
    {
        this->x += other.getx();
        this->y += other.gety();
        this->z += other.getz();
        return *this;
    }
    vec3 operator -=(vec3 &other)
    {
        this->x -= other.getx();
        this->y -= other.gety();
        this->z -= other.getz();
        return *this;
    }
    vec3 operator *(vec3 &other)
    {
        vec3 nowy;
        nowy.setxyz(this->y*other.getz()-this->z*other.gety(),this->z*other.getx()-this->x*other.getz(),this->x*other.gety()-this->y*other.getx());
        return nowy;
    }
    vec3 operator *=(vec3 &other)
    {
        float x1=this->y*other.getz()-this->z*other.gety();
        float y1=this->z*other.getx()-this->x*other.getz();
        float z1=this->x*other.gety()-this->y*other.getx();
        this->x=x1;
        this->y=y1;
        this->z=z1;
        return *this;
    }
    vec3 operator *(const float &liczba)
    {
        vec3 nowy;
        nowy.setxyz(this->x*liczba,this->y*liczba,this->z*liczba);
        return nowy;
    }
    vec3 operator *=(const float &liczba)
    {
        this->x*=liczba;
        this->y*=liczba;
        this->z*=liczba;
        return *this;
    }
};
class Person
{
private:
    string nazwa;
    int wiek;
    vector <Person> dzieci;
public:
    int getpierwsza()
    {
        string::iterator i = nazwa.begin();
        return *i;
    }
    string getnazwa()
    {
        return nazwa;
    }
    int getwiek()
    {
        return wiek;
    }
    bool czywsrod(Person jacek)
    {
        for(size_t i=0;i<dzieci.size();i++)
        {
            if(dzieci[i].getnazwa()==jacek.getnazwa() && dzieci[i].getwiek() == jacek.getwiek())
            {
                return true;
            }
        }
        return false;
    }
    static bool komparator(Person &a1,Person &a2)
    {
        if(a1.getwiek() < a2.getwiek()){return true;}else if(a1.getwiek() < a2.getwiek()){return false;}else if(a1.getpierwsza() < a2.getpierwsza()){ return true;} else return false;
    }
    Person operator < (int liczba)
    {
    sort(dzieci.begin(),dzieci.end(),komparator);
    return *this;
    }
    Person operator <<= (Person &osoba)
    {
        if(!czywsrod(osoba))
        {
            dzieci.push_back(osoba);
        }
    }
    Person *operator [] (int liczba)
    {
        return &dzieci[liczba];
    }
};

int main(int argc, char *argv[])
{
    vec3 nowy;
    nowy.setxyz(1,2,3);
    vec3 nowy2;
    nowy2.setxyz(4,5,6);
    nowy *= nowy2;
    cout << nowy.getx()<< " " << nowy.gety() << " " << nowy.getz() << endl;
    return 0;
}
