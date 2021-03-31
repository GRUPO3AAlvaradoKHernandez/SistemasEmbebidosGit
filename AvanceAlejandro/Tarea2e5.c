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
    mo=moda(ALU);
    printf("La Moda es:\n");
    printf("%.1f \n",mo);


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

int moda( int num[]){
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
/*void guardar(int a) {
    FILE* fichero;
    fichero = fopen("Notas.txt", "wt");
    fwrite(a, sizeof(char), sizeof(a),fichero);
    fclose(fichero);
    
}*/

