#include <iostream>
#include <time.h>
using namespace std;

class villager
{
private:
    string *imie;
    int wiek;
    int wiek_max;
    bool plec;
    string imiona_m[5]={"maciek","stasiek","jarek","Karol","Patryk"};
    string imiona_z[5]={"olga","stasia","michalina","Karola","Patrycja"};

public:
    ~villager()
    {
        if(wiek==wiek_max){
        cout<<*imie<<" umarł w wieku: "<< wiek<< " lat."<<endl;
        delete &wiek;
        delete &wiek_max;
        delete &plec;
        delete imie;
        }

    }
    villager()
    {
        srand(time(NULL));
        wiek_max = rand()%101;
        wiek=0;
        plec=rand()%2;
        if(plec)
        {
            imie=&imiona_m[rand()%5];
        }else imie=&imiona_z[rand()%5];
        if(plec){
        cout << *imie << " urodzil sie!"<<endl;
        }else cout << *imie << " urodzila sie!"<<endl;
    }
    villager(villager *c, string imie)
    {
        *this->imie=imie;
        wiek=c->getwiek();
        wiek_max=c->getmax();
        plec=c->getplec();

    }
    villager(string imie,int wiek,int max_wiek):wiek(wiek),wiek_max(max_wiek)
    {
        *this->imie=imie;
        if(*(imie.end()-1)=='a'){
            plec = false;
        }else plec = true;
        if(plec){
        cout << imie << " urodzil sie!"<<endl;
        }else cout << imie << " urodzila sie!"<<endl;



    }
    void dodaj_wiek(){
        wiek++;
        if(wiek==wiek_max)
        {
            delete this;

        }
    }


    string *getimie()
    {

        return imie;
    }
    int getwiek()
    {
        return wiek;
    }
    int getmax()
    {
        return wiek_max;
    }
    bool getplec()
    {
        return plec;
    }





};
class Household
{
private:
    villager **dom;
    int max;
    int obc;

public:
    Household(int max):max(max)
    {
        dom = new villager * [max];
        obc=0;

    }
    void dodaj_wiek()
    {
        for(int i=0;i<max;i++)
        {
            dom[i][0].dodaj_wiek();

        }


    }
    void dodaj_chlopka(villager *chlopek)
    {
        dom[obc]=chlopek;
        obc++;


    }
    string getimie(){
        return *dom[obc][0].getimie();
    }







};



int main(int argc, char *argv[])
{

    villager *nowy= new villager();
    Household *dom= new Household(5);
    dom->dodaj_chlopka(nowy);



    cout << dom->getimie() << endl;

    return 0;
}
