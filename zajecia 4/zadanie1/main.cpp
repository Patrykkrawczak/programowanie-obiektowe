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
    Household(int max,villager *ojciec):max(max)
    {
        dom = new villager * [max];
        for(int i=0;i< this->max;i++)
        {
            dom[i]=nullptr;
        }
        dom[0]=ojciec;
        obc=0;

    }
    void dodaj_wiek()
    {
        int w=0,w2=0;
        for(int i=0;i<obc;i++)
        {
            dom[i]->dodaj_wiek();

        }
        for(int i=0;i<obc;i++)
        {
            if(dom[i]->getwiek()>=18 && dom[i]->getwiek()<=40)
            {
                if(dom[i]->getplec()){
                    w=1;
                }else w2=1;
            }

        }
        if(w==1 && w2==1)
        {
            villager *nowy = new villager;
            this->dodaj_chlopka(nowy);
        }



    }
    void dodaj_chlopka(villager *chlopek)
    {

        if(obc<max){
            dom[obc]=chlopek;
            obc++;
        }



    }
    string getimie(){
        return *dom[obc-1]->getimie();

    }
    int get_obc()
    {
        return obc;
    }
    int get_max()
    {
       return max;
    }
    villager *adres(int i)
    {
        return dom[i];
    }







};
class village
{
private:
    Household *domy;
    int obc;
public:
    void wyswietl()
    {
        for(int i=0;i<obc;i++)
        {
            cout << i+1 << "\t";



        }
        cout << "\n" << endl;
        for(int i=0;i<obc;i++)
        {
            cout << domy[i].get_obc()  << "\t";



        }
    }








};


int main(int argc, char *argv[])
{


    return 0;
}
