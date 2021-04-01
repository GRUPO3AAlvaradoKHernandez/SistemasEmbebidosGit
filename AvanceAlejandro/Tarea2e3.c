#include<stdio.h>    
#include<stdlib.h>  

void tabla (int Tabla[], int n){ //Creación de la tabla con los números en forma aleatoria (0-255)
             srand ((unsigned)time(NULL));
                for (int i=0 ; i<=n;i++){
                        Tabla[i] = rand () % (255 - 0 + 1) + 0;  
                    } 
            }

int main(){
    static int total=256;
    static int ALU[256]={0};
    int num,temp;
    int bin[8]={0}; 
    tabla(ALU,total); //Creacion de la tabla
    printf("Ingrese el número a elegir: ");    //solicitud para elegir en tabla
    scanf("%d",&num);   
    temp=ALU[num]; //guardar el valor obtenido en tabla
    printf("El número es: ");  
    printf("%d \n", temp); 
    binario(temp,bin); //transformar en binario
    imprimirbin(bin); //imprimir en binario
    imprimirind(bin); //imprimir por separado
    led(bin);//analisis led
}

void binario(int n,int a[8]){ //transformar en binario
    int i;
    for( i=0;n>0;i++)    
        {    
            a[i]=n%2;    
            n=n/2;    
        }     
    //return *a;
}

void imprimirbin(int a[8]){ //imprimir en binario
    printf("El número binario es:\n"); 
    int i=8;   
            for(i=i-1;i>=0;i--)    
                {    
            printf("%d",a[i]);    
            }  
            printf("\n");     
}

void imprimirind(int a[8]){ //imprimir por separado
 
    int i=8;   
            for(i=i-1;i>=0;i--)    
                {    
            printf("%d",a[i]);    
            printf(" ");  
            }  
      printf("\n"); 
}
void led(int a[8]){ //encendido led 
    int i=8;   
            for(i=i-1;i>=0;i--)    
                {    
            printf("El Led %d",(i+1));
            printf(" esta:"); 
            if (a[i]==1){
            printf("ON");  
            printf("\n"); 
                 }
             else{
             printf("OFF");  
            printf("\n"); }
              }  
}