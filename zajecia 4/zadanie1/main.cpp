#include <iostream>
#include <time.h>

using namespace std;

class villager {
private:
    string *imie;
    int wiek;
    int wiek_max;
    bool plec;
    string imiona_m[5] = {"maciek", "stasiek", "jarek", "Karol", "Patryk"};
    string imiona_z[5] = {"olga", "stasia", "michalina", "Karola", "Patrycja"};

public:
    ~villager() {
        if (wiek == wiek_max) {
            cout << *imie << " umarl w wieku: " << wiek << " lat." << endl;
            delete &wiek;
            delete &wiek_max;
            delete &plec;
            delete imie;
        }

    }

    villager() {

        wiek_max = rand() % 101;
        wiek = 0;
        plec = rand() % 2;
        if (plec) {
            imie = &imiona_m[rand() % 5];
        } else imie = &imiona_z[rand() % 5];
        if (plec) {
            cout << *imie << " urodzil sie!" << endl;
        } else cout << *imie << " urodzila sie!" << endl;
    }

    villager(villager *c, string imie) {
        *this->imie = imie;
        wiek = c->getwiek();
        wiek_max = c->getmax();
        plec = c->getplec();

    }

    villager(string imie, int wiek, int max_wiek) : wiek(wiek), wiek_max(max_wiek) {
        *this->imie = imie;
        if (*(imie.end() - 1) == 'a') {
            plec = false;
        } else plec = true;
        if (plec) {
            cout << imie << " urodzil sie!" << endl;
        } else cout << imie << " urodzila sie!" << endl;


    }

    bool dodaj_wiek() {
        wiek++;
        if (wiek == wiek_max) {
            delete this;
            return true;

        }
        return false;
    }


    string *getimie() {

        return imie;
    }

    int getwiek() {
        return wiek;
    }

    int getmax() {
        return wiek_max;
    }

    bool getplec() {
        return plec;
    }


};

class Household {
private:
    villager **dom;
    int max;
    int obc;

public:
    Household(int max, villager *ojciec) : max(max) {
        dom = new villager *[max];
        for (int i = 0; i < this->max; i++) {
            dom[i] = nullptr;
        }
        dom[0] = ojciec;
        obc = 1;

    }

    void dodaj_wiek() {
        int w = 0, w2 = 0;
        for (int i = 0; i < obc; i++) {
            if (dom[i]->dodaj_wiek()) {
                villager *wzk;
                for (int j = i; j < obc - 1; j++) {
                    dom[j] = dom[j + 1];
                }
                obc--;
            }


        }
        for (int i = 0; i < obc; i++) {
            if (dom[i]->getwiek() >= 18 && dom[i]->getwiek() <= 40) {
                if (dom[i]->getplec()) {
                    w = 1;
                } else w2 = 1;
            }

        }
        if (w == 1 && w2 == 1 && false) {
            villager *nowy = new villager;
            this->dodaj_chlopka(nowy);
        }


    }

    void dodaj_chlopka(villager *chlopek) {

        if (obc < max) {
            dom[obc] = chlopek;
            obc++;
        }


    }

    string getimie() {
        return *dom[obc - 1]->getimie();

    }

    int get_obc() {
        return obc;
    }

    int get_max() {
        return max;
    }

    villager *adres(int i) {
        return dom[i];
    }

    bool czy_dziecko() {
        bool w1 = false;
        bool w2 = false;
        for (int i = 0; i < obc; i++) {
            if (dom[i]->getplec() && dom[i]->getwiek() > 18 && dom[i]->getwiek() < 60) {
                w1 = true;
            } else if (dom[i]->getwiek() > 18 && dom[i]->getwiek() < 60) {
                w2 = true;
            }


        }
        if (w1 && w2) {
            return true;
        } else return false;


    }


};

class village {
private:
    Household **domy;
    int obc;
    int max;
public:
    village(int max, Household *pierwszy) : max(max) {
        for (int i = 0; i < max; i++) {
            domy[i] = nullptr;
        }
        domy[0] = pierwszy;

        obc = 1;
    }

    void dodaj(Household *nowy) {
        domy[obc] = nowy;
        obc++;

    }

    void szukam_domu(villager *stas, int i, bool t) {
        bool warunek = true;
        if (t) {
            for (int j = 0; j < obc; j++) {
                if (t && (j > i - 8 && j < i + 8)) {
                    if (domy[j]->get_max() > domy[i]->get_obc() && warunek) {
                        domy[j]->dodaj_chlopka(stas);\
                warunek = false;
                    }
                }


            }
            if (warunek) {
                szukam_domu(stas, i, false);
            }
        } else {
            for (int j = 0; j < obc; j++) {

                if (domy[j]->get_max() > domy[i]->get_obc() && warunek) {
                    domy[j]->dodaj_chlopka(stas);
                    warunek = false;
                }


            }
            if (warunek) {
                if (obc < max) {
                    Household *nowy = new Household(10, stas);
                    dodaj(nowy);
                    cout << "dodano nowy dom" << endl;
                } else cout << " wyemigrowal" << endl;
            }


        }

    }

    void dodaj_wiek() {
        bool war = false;
        for (int i = 0; i < obc; i++) {
            if (domy[i]->get_obc() == 0) war = true;
            domy[i]->dodaj_wiek();
            if (domy[i]->get_obc() == 0 && war) {
                delete domy[i];
                for (int j = i; j < obc - 1; j++) {
                    domy[j] = domy[j + 1];
                }
                obc--;
            }
            if (domy[i]->czy_dziecko()) {
                villager *stas = new villager;
                if (domy[i]->get_obc() < domy[i]->get_max()) {
                    domy[i]->dodaj_chlopka(stas);
                } else szukam_domu(stas, i, true);
            }

        }

    }


    void wyswietl() {
        for (int i = 0; i < obc; i++) {
            cout << i + 1 << "\t";


        }
        cout << "\n" << endl;
        for (int i = 0; i < obc; i++) {
            cout << domy[i]->get_obc() << "\t";


        }
    }


};


int main(int argc, char *argv[]) {
    srand(time(NULL));
    villager nowwy;
    villager nowwwy;
    Household dom = Household(10, &nowwy);
    dom.dodaj_chlopka(&nowwwy);
    village wioska = village(20, &dom);
    for (int i = 0; i < 100; i++) {
        wioska.dodaj_wiek();

    }
    wioska.wyswietl();


    return 0;
}
