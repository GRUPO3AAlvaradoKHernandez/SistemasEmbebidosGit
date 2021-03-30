#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){

    int i,max,min,horamin,horamax;
    int TEM[24];
    float prom;
    max=0;
    min=40;
    srand((unsigned)time(NULL));

    cout<<"  Hora     Temperatura"<<endl;

    for(i=0;i<=23;i++){
        TEM[i] = 17+(rand()%16);
        prom=prom+TEM[i];
        if (i<10){
        cout<<"0"<<i<<":00 hrs     "<<TEM[i]<<" C°"<<endl;}
        else {
            cout<<i<<":00 hrs     "<<TEM[i]<<" C°"<<endl;}
        if (TEM[i]<min){
            min=TEM[i];
            horamin=i;
            }
        if(TEM[i]>max){
           max=TEM[i];
           horamax=i;
           } 
    }
    prom=prom/24;
    cout<<"Temperatura promedio "<<prom<< " C°"<<endl;
    cout<<"Temperatura máxima "<<max<<" C°"<<" medida a las "<<horamax<<":00 hrs"<<endl;
    cout<<"Temperatura minima "<<min<<" C°"<<" medida a las "<<horamin<<":00 hrs"<<endl;
return 0;
}