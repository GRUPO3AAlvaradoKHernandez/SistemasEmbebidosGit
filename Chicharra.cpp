#include <iostream>
#include <time.h>
using namespace std;

int main(){

 srand((unsigned)time(NULL));
 double S,FA,div;

 S=0+rand()%60;
 FA=(S/4)+40;
 cout<<"Numero de sonidos emitidos en un minuto = "<<S<<endl;
 cout<<"Temperatura = "<<FA<<" F°"<<endl;
 
return 0;
}