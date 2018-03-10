#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
    string napis;
    string napis2;
    getline(cin,napis2);
    fstream plik;
    cin >> napis;
    plik.open(napis.c_str(),ios::in);
    for(int i=0;napis2[i]!='\0';i++) {
        plik<<napis2[i];
        if(i%20==0){
            plik<<endl;
        }
    }
    return 0;
}