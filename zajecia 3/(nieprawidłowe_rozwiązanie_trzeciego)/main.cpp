#include <iostream>
#include<string>
#include <fstream>

using namespace std;

int main(int argc, char *argv[])
{
    ofstream plik;
    string n;
    cin>>n;
    plik.open(n.c_str());
    while(getline(plik,n));




    cout << "Hello World!" << endl;
    return 0;
}
