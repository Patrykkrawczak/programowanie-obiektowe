#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
    string napis;
    string sciezka;
    getline(cin,napis);
    cin>>sciezka;
    fstream plik;
    plik.open(sciezka);
    string napis3;
    plik >> napis3;
    int liczba=0;
    string::size_type pozycja=0;
    while(pozycja=napis3.find(napis,pozycja)!=string::npos){
        ++liczba;
        pozycja+=napis.size();

    }
    cout << liczba <<endl;

    return 0;
}