#include <iostream>
#include <time.h>

using namespace std;


void Temperatura(int i,int TEM[24]) { //Función para generar los valores de la T°
        TEM[i] = 15 + rand() % (17);
        if (i<10){
        cout<<"0"<<i<<":00 hrs     "<<TEM[i]<<" °C"<<endl;
        }
        else {
            cout<<i<<":00 hrs     "<<TEM[i]<<" °C"<<endl;
        }
return;
}

//La función promedio suma los valores que se van agregando al vector TEM[].
double promedio(int i,int TEM [24],double prom){
        prom=prom+TEM[i]; 
return prom; //Se devuelve el valor de prom.
}

//La función maximoyminimo compara los valores del vector [].
void maximoyminimo (int i,int TEM[24],int maxymin[]){

    if (TEM[i]<maxymin[0]){ //Compara si TEM[i] es menor al número guardado.
        maxymin[0]=TEM[i]; 
        maxymin[1]=i;
    }
    
    if (TEM[i]>maxymin[2]){ //Compara si TEM[i] es mayor al número guardado.
        maxymin[2]=TEM[i];
        maxymin[3]=i;
    }

return;
}

int main() {
    
     //Definición e inicialización de variables.
    int i,TEM[24];
    int maxymin[]={40,0,0,0}; 
    double prom=0;


    srand((unsigned)time(NULL)); //Prepara la función rand.
    cout<<"  Hora     Temperatura"<<endl;

    //Se hará un llamado a cada función en los 24 ciclos de for.
    for (int i = 0; i <= 23; i++){
        Temperatura(i,TEM);
        prom=promedio(i,TEM,prom);
        maximoyminimo(i,TEM,maxymin);
    }
    
    //Una vez completado todos los ciclos de for se muestran en pantalla los datos obtenidos. 
    prom=prom/24;
    cout<<"Temperatura promedio "<<prom<<" °C"<<endl;
    cout<<"Temperatura mínima "<<maxymin[0]<<" C° medida a las "<<maxymin[1]<<":00 hrs"<<endl;
    cout<<"Temperatura máxima "<<maxymin[2]<<" C° medida a las "<<maxymin[3]<<":00 hrs"<<endl;

return 0;
}