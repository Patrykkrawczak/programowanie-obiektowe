#include <iostream>

using namespace std;

class polygon{
public:
    typedef struct point
    {
    float x;
    float y;

    }pu;
private:
    pu **punkty;
    int zalokowane;
    int rzeczywiste;

public:
    polygon()
    {
        zalokowane = 4;
        rzeczywiste = 0;
        for(int i=0;i<zalokowane;i++)
        {
            punkty[i]= new pu;
        }
    }
    polygon(int liczba)
    {
        int i;
        rzeczywiste = 0;
        for(i=4;i<liczba;i+4);
        zalokowane = i;
        for(int i=0;i<zalokowane;i++)
        {
            punkty[i]= new pu;
        }
    }
    polygon gleboka_kopia()
    {
        polygon nowy;
        nowy.zalokowane=this->zalokowane;
        nowy.punkty=this->punkty;
        nowy.rzeczywiste=this->rzeczywiste;
        return nowy;

    }
    ~polygon()
    {
        for(int i=0;i<zalokowane;i++)
        {
            free(punkty[i]);
        }

    }
    void dodaj(pu nowy)
    {
        if(rzeczywiste<=zalokowane) {
            punkty[rzeczywiste] = &nowy;
            rzeczywiste++;
        }else
        {
            for(int i = zalokowane-1;i<zalokowane+4;i++){
                punkty[i]=new pu;
            }
            zalokowane += 4;
            punkty[rzeczywiste] = &nowy;
            rzeczywiste++;

        }
    }
    pu *metoda(int i)
    {
        return punkty[i];
    }
    bool sprawdzenie(pu punkt)
    {
        for(int i=0;i<rzeczywiste;i++)
        {
            if(punkty[i]->x==punkt.x && punkty[i]->y==punkt.y ){
                return true;
            }

        }
        return false;


    }

};

class image
{
private:
    polygon *tab[10];
    int ilosc;
    image(const image& other){
    };
public:

};


int main() {
    cout << "Hello, World!" << endl;
    return 0;
}