#include <iostream>
#include <time.h>
using namespace std;

int main(){

 srand((unsigned)time(NULL));
 int CLA,CAT,ANT,RES,SAL;
 RES=0;
 SAL = 326500+(rand()%300000);
 
 cout<<"Ingrese la clave del trabajador."<<endl;
 cin>>CLA;
 cout<<"Ingrese la categoria del trabajador."<<endl;
 cin>>CAT;
 cout<<"Ingrese los años de antiguedad del trabajador."<<endl;
 cin>>ANT;
 
 switch(CAT)
    {
        case 1: RES=0;
        break;
        case 2:
             if(ANT>7){RES=1;}
        break;
        case 3:
            if(ANT>5){RES=1;}
        break;
        case 4:
            if(ANT>5){RES=1;}
        break;
        default: RES=0;
    }
 if(RES==1){
     cout<<"El trabajador clave "<<CLA<<" si reúne las condiciones necesarias."<<endl;
     cout<<"Salario actual $"<<SAL<<endl;
 }
 else{
     cout << "El trabajador clave "<<CLA<<" no reúne las condiciones necesarias."<<endl;
 }
return 0;
}