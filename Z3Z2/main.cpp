#include <iostream>
//sprawdzić czy dany string 2 jest w string 1 bez wykorzystania specjalnych funkcji
using namespace std;

int main(int argc, char *argv[])
{
    string n1;
    string n2;
    string n3;
    string n4=n1;
    cin>>n1>>n2>>n3>>endl;
    int i,warunek=0;warunek2=0;
    for(string::iterator it=n1.begin();it<n1.end();it++){
        i=it;
        for(string::iterator it2=n2.begin();it2<n2.end;it++,i++){

         if(n1[i]!=n2[it2]){
             warunek =1;
         }


        }
        if(warunek==0){
            i=it;
            for(string::iterator it2=n3.begin();it2<n3.end;it2++){
                n1[i]=n3[it2];
                i++;


            }
            for(;i<napis)




        }




    }


    cout << "Hello World!" << endl;
    return 0;
}
