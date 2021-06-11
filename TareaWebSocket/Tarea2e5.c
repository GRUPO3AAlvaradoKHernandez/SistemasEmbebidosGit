#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void tabla (int Tabla[]){ //Creación de la tabla con las notas 
             srand (time(NULL));
                for (int i=0 ; i<=100;i++)
                    {
                        Tabla[i] = rand () % (70-10+1) + 10;
                        // printf("%d \n", Tabla[i]);
    
                    } 
            }


int main(){
    static int ALU[100]={0};
    float sum,var,des,mo;
    tabla(ALU);
    sum=mediaarit(ALU);
    var=varianza(ALU);
    des=desviacion(ALU);
    mo=moda(ALU);
    printf("La Media Artimetica es:\n");
    printf("%d \n ",(int)sum);
    printf("La Varianza es:\n");
    printf("%d \n ",(int)var);
    printf("La Desviacion es:\n");
    printf("%d \n ",(int)des);
    printf("La Moda es:\n");
    printf("%d \n ",(int)mo);
}

int mediaarit(int t[]){ //Calculo Media
     int count=0;
     float suma;
     int n=100;

     for (int i=1;i<=n;i++){
         count=count+t[i];
            }
     suma=count/n;
     return suma;
}

int varianza(int t[]){ //Calculo Varianza

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

int desviacion(int t[]){ //Calculo Desviación 
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

int moda( int num[]){ //Calculo de Moda
        int b,cont,val=100;
        static float numero;
        for(int a=0;a<val;a++){
                cont=0;
                for(b=0;b<val;b++){
                     if(num[a]==num[b]){
                         cont++;  
                         }
                }
                if(cont>=2){
                numero=num[a];
            }
        }
    return numero;
}