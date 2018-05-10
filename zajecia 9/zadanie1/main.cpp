#include <iostream>

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
    void operator +=(vec3 &other)
    {
        this->x += other.getx();
        this->y += other.gety();
        this->z += other.getz();
    }
    void operator -=(vec3 &other)
    {
        this->x -= other.getx();
        this->y -= other.gety();
        this->z -= other.getz();
    }
    vec3 operator *(vec3 &other)
    {
        vec3 nowy;
        nowy.setxyz(this->y*other.getz()-this->z*other.gety(),this->x*other.getz()-this->z*other.gety(),this->x*other.gety()-this->y*other.getx());
        return nowy;
    }
    void operator *=(vec3 &other)
    {
        float x1=this->y*other.getz()-this->z*other.gety();
        float y1=this->x*other.getz()-this->z*other.gety();
        float z1=this->x*other.gety()-this->y*other.getx();
        this->x=x1;
        this->y=y1;
        this->z=z1;
    }
    vec3 operator *(const float &liczba)
    {
        vec3 nowy;
        nowy.setxyz(this->x*liczba,this->y*liczba,this->z*liczba);
        return nowy;
    }
    void operator *=(const float &liczba)
    {
        this->x*=liczba;
        this->y*=liczba;
        this->z*=liczba;

    }






};


int main(int argc, char *argv[])
{

    return 0;
}
