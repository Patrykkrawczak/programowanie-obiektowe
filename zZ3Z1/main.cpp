#include <iostream>
#include <string>
#include <algorithm>
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[])
{

    string  napis="ala ma kota";
    int tab['z'-'a'+1];
    for(int i=0;i<'z'-'a'+1;i++){
        tab[i]=0;


    }
    transform(napis.begin(),napis.end(),napis.begin(),::tolower);
    cout<<(short)napis[0]<<endl;
    for(int i=0;napis[i]!='\0';i++){
        tab[(short)napis[i]+'a']+=1;
        cout <<napis[i]<<endl;
        printf("%d",(short)napis[i]);


    }
    int najmniejsza='z'-'a'+1;
    int najwieksza=0;
    for(int i=0;i<'z'-'a'+1;i++){
        if(tab[i]!=0 && i<najmniejsza ){
            najmniejsza=i;
        }
        if(tab[i]!=0 && i>najwieksza ){
            najwieksza=i;
        }



    }
    cout<<najmniejsza<<"\t"<<najwieksza<<endl;





    return 0;

}
