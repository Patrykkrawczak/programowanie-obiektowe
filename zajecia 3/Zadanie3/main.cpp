#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
    string napis;
    string napis2;
    getline(cin,napis2);
    fstream plik;
    char *a;
    cin >> napis;
    plik.open(napis.c_str(),ios::in);
    char *napis3;

    plik.getline(napis3,20);
    return 0;
}