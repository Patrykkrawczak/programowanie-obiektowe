#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
     string napis;
    getline(cin,napis);
    transform(napis.begin(),napis.end(),napis.begin(),::tolower);
    cout << napis;
    int najmniejsza = (int) napis[0];
    int najwieksza = (int) napis[0];
    char a=napis[0];
    char b=napis[0];

    for(string::iterator it=napis.begin();it<napis.end();it++){

        if(najwieksza<(int)*it && (int)*it>=(int)'a' && (int)*it<=(int)'z'){
            najwieksza=(int)*it;
           b=*it;

        }
        if(najmniejsza>(int)*it && (int)*it>=(int)'a' && (int)*it<=(int)'z'){
            najmniejsza=(int)*it;
            a=*it;

        }



    }
    cout << "najdalej polozona w alfabecie to: "<< b << endl << "a najblizej: " << a << endl;

    return 0;
}