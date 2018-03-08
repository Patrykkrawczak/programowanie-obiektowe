#include <iostream>
#include <string>

using namespace std;

int main() {
    string n1;
    string n2;
    getline(cin,n1);
    getline(cin,n2);
    int i=0,warunek =0;
    for(string::iterator it=n1.begin();it<n1.end();it++){
        if(n2[i]=='\0'){
            cout<<"drugi napis zawiera sie w pierwszym"<<endl;
            warunek++;
            break;
        }
        if(*it==n2[i]){
            i++;

        }else(i=0);



    }
    if(warunek==0){
        cout<<"napis drugi nie zawiera sie w pierwszym"<<endl;
    }


    return 0;
}