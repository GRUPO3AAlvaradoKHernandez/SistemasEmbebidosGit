#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//const char EndOfLine[] = "\n";
void tabla (int Tabla[]){
    srand (time(NULL));
for (int i=0 ; i<=100;i++)
{
    Tabla[i] = rand () % (70-10+1) + 10;
    //Tabla[i] = Tabla[i]/10;
    //guardar(Tabla[i]);
    //printf("%d \n", Tabla[i]);
} 
}


int main(){
    static int ALU[100]={0};
    float sum,var,des,mo;
    tabla(ALU);
    sum=mediaarit(ALU);
    printf("La Media Artimetica es:\n");
    printf("%.1f \n ",sum);
    var=varianza(ALU);
    printf("La Varianza es:\n");
    printf("%.1f \n",var);
    des=desviacion(ALU);
    printf("La Desviacion es:\n");
    printf("%.1f \n",des);

}

int mediaarit(int t[]){
     int count=0;
     float suma;
     int n=100;

     for (int i=1;i<=n;i++){
         count=count+t[i];
     }
     suma=count/n;
     return suma;
}

int varianza(int t[]){

    float sum;
    int count=0;
     float suma;
     int n=100;
    sum=mediaarit(t);

    for (int i=1;i<=n;i++){
         count=count+pow((t[i]-sum),2);
     }
    suma=count/n;
     return suma;
}

int desviacion(int t[]){
    float sum;
    int count=0;
     float suma;
     float var;
     float res;
     int n=100;
    var=varianza(t);
    res = sqrt(var);
    return res;
}

void moda(){

    /*

    // Calcular la moda
    // Rellenamos el vector auxiliar inicializandolo a valores 0
    for(contador=0;contador<MAX;contador++) {
        auxiliar[contador]=0;
    }
    // Recorrer el vector comprobando las repeticiones de cada numero
    // y almacenando las mismas en el vector auxiliar segun la posicion
    // del numero
    for(contador=0;contador<MAX;contador++) {
        numero = numeros[contador];
        posicion = contador;
        for(contador2=contador;contador2<MAX;contador2++) {
            if(numeros[contador2]==numero) auxiliar[posicion]++;
        }
    }
    // Una vez esALUcidas las repeticiones de cada numero se ha de establcer
    // cual es la posicion del vector que tiene un numero de repeticiones mayor
    // ya que esta es la posicion que se corresponde con el numero que se repite
    // mas veces el vector ( MODA )
    // se esALUce en primer lugar el mayor como el primer elemento del vector
    mayor=auxiliar[0];
    posicionmayor = 0;
    for(contador=0;contador<MAX;contador++) {
        if(auxiliar[contador]>mayor) {
            posicionmayor=contador;
            mayor=auxiliar[contador];
        }
    }
    */
}
/*void guardar(int a) {
    FILE* fichero;
    fichero = fopen("Notas.txt", "wt");
    fwrite(a, sizeof(char), sizeof(a),fichero);
    fclose(fichero);
    
}*/

