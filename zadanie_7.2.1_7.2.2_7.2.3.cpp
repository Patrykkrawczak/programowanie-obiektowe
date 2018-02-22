#include <stdio.h>
#include <stdlib.h>


typedef struct trojkat {
    int a;
    int b;
    int c;


}tro;
typedef struct punkt{
    int x;
    int y;
    int z;
}pu;

int funkcja(tro troj){
    return troj.a+troj.b+troj.c;
}
void funkcja2(tro troj,tro *troj2){
    troj2->a=troj.a;
    troj2->b=troj.b;
    troj2->c=troj.c;
}

int funkcja3(pu *tab,int n){

    int i;
    int j;
    int odleglosc=((tab[1].x-tab[0].x)*(tab[1].x-tab[0].x)+(tab[1].y-tab[0].y)*(tab[1].y-tab[0].y)+(tab[1].z-tab[0].z)*(tab[1].z-tab[0].z));
    for(i=0;i<n;i++){

        for(j=i+1;j<n;j++){
            if(odleglosc>((tab[j].x-tab[i].x)*(tab[j].x-tab[i].x)+(tab[j].y-tab[i].y)*(tab[j].y-tab[i].y)+(tab[j].z-tab[i].z)*(tab[j].z-tab[i].z)))
            {

                odleglosc=((tab[j].x-tab[i].x)*(tab[j].x-tab[i].x)+(tab[j].y-tab[i].y)*(tab[j].y-tab[i].y)+(tab[j].z-tab[i].z)*(tab[j].z-tab[i].z));
            }
        }

    }
    return odleglosc;


}

int main()
{
tro troj;
troj.a=3;
troj.b=4;
troj.c=5;
printf("obwod to:%d\n",funkcja(troj));
tro troj2;
funkcja2(troj,&troj2);
printf("wartosci nowego to: %d, %d, %d\n",troj2.a,troj2.b,troj2.c);

}
