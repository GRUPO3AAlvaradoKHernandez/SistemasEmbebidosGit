#include <iostream>
#include <time.h>
using namespace std;

int main(){
  
 srand((unsigned)time(NULL)); 
 int CLA,CAT,ANT,RES,SAL;
 
 // La variable SAL fue definida de manera aleatoria con valores entre los 326500 y 626500 pesos.
 SAL = 326500+(rand()%300001); 
 RES = 0;

 // A continuación el usuario debe ingresar los valores de las variables CLA, CAT y ANT.
 cout<<"Ingrese la clave del trabajador."<<endl;
 cin>>CLA;
 cout<<"Ingrese la categoría del trabajador."<<endl;
 cin>>CAT;
 cout<<"Ingrese los años de antigüedad del trabajador."<<endl;
 cin>>ANT;
 
switch(CAT) //Switch que comprueba la categoria del trabajador
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
 
 // La siguiente condición comprueba el valor de RES y muestra los resultados en   pantalla.
 
 // Si RES=1 el trabajador cumple los requisitos.
 if(RES==1){
     cout<<"El trabajador clave "<<CLA<<" si reúne las condiciones necesarias."<<endl;
     cout<<"Salario actual $"<<SAL<<endl;
 }
 // Si RES=0 el trabajador no cumple los requisitos.
 else{
     cout << "El trabajador clave "<<CLA<<" no reúne las condiciones necesarias."<<endl;
 }
return 0;
}