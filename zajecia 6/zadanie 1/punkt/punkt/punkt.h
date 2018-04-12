#ifndef PUNKT_H
#define PUNKT_H

namespace pt {
class point
{
private:
    int x;
    int y;
public:
    point()
    {
        x=0;
        y=0;
    }
    point(int x,int y) : x(x),y(y){}
    int getx()
    {
        return x;
    }
    int gety()
    {
        return y;
    }
    void ustawxy(int x,int y)
    {
        this->x=x;
        this->y=y;
    }
};
}

namespace acc{
int zmienna=0;
int zwrocid()
{
    zmienna++;
    return zmienna-1;
}


}

#endif // PUNKT_H
