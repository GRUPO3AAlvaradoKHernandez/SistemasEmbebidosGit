#include <iostream>
#include <time.h>
using namespace std;

int main(){

 srand((unsigned)time(NULL));
 double S,FA,C;

 S=0+rand()%120; //Valor aleatorio para S.
 
 FA=(S/4)+40; //Luego de obtenido el valor de S se procede a realizar la ecuación para la temperatura en °F.
 C=((FA-32)*5)/9; //Se realiza el cambio de grados Fahrenheit a grados Celsius.
 
 //Por último, se muestra en pantalla la cantidad de sonidos emitidos por minuto y la temperatura correspondiente.
 cout<<"Número de sonidos emitidos en un minuto = "<<S<<endl;
 cout<<"Temperatura = "<<C<<" °C"<<endl;
 
return 0;
}