#include <iostream>
#include <string>
#include <fstream>
using namespace std;
/*Napisz funkcję, która przyjmie od użytkownika ścieżkę do pliku.
 * Plik powinien być sformatowany tak, że w jednej linii znajdują się kolejne liczby oddzielone spacjami.
 * Program powinien zsumować liczby w każdej linii i wyświetlić w kolejnych liniach obliczone sumy.
    */

void funkcja(string *napis){

    fstream plik;
    plik.open(*napis);
    string napis2;
    int suma=0;
    int wczytane=0;
    int warunek =0;
    while(getline(plik,napis2)){
        int j=0;
        for(string::iterator it = napis2.begin();it<napis2.end();it++){
            if(warunek==0 && *it!=' ')
            {
                wczytane = *it - '0';
                warunek=1;
            }
            if(*it != ' '){
                wczytane=wczytane*10+ *it - '0';

            }
            if(warunek!=0 && *it == ' '){
                suma+=wczytane;
                warunek=0;
                wczytane=0;


            }



        }
        cout << suma;
        suma=0;

    }


}



int main() {

    return 0;
}