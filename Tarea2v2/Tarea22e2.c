#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

//La función comcadena comprueba si la cadena ingresada sigue el formato válido.
void comcadena (unsigned int lg,char cad[51]){
    int res;
    for(int i=0 ; i < lg ; i++){

        res=i+1;
        if(isdigit(cad[i])!=0){ //Comprueba si existe un dígito mayor a 9.
            if(isdigit(cad[res])!=0){
                printf("La cadena ingresada no es valida.\n");
                exit(-1);
            }
        }
        else if(isalpha(cad[res])!=0){ //Comprueba si existen dos letras juntas.
            printf("La cadena ingresada no es valida.\n");
            exit(-1);
        }
        if(ispunct(cad[i])!=0){ //Comprueba si existe un carácter de puntuación.
            printf("La cadena ingresada no es valida.\n");
            exit(-1);
        }
        else if(isspace(cad[i])!=0){ //Comprueba si existe un espacio en la cadena.
            printf("La cadena ingresada no es valida.\n");
            exit(-1);   
        }
    }
    return;
}

int main(){

    char cad[51];
    unsigned int lg,res,num;

    printf("Ingrese cadena de caracteres:\n");
    fgets(cad, 51,stdin); //fgets asegura que se tomen solo 50 caracteres.
    lg=strlen(cad)-1; //Obtiene el largo de la cadena.
    comcadena(lg,cad);
    printf("Su cadena traducida es: \n");

    for (int i = 0; i < lg ; i++){

        if(isdigit(cad[i])!=0){//La condición se cumple si cad[i] es numérico.
            res=i+1;
            num=cad[i]-'0'; //Convierte el valor char de cad[i] a int.
            for (int b=0; b < num ; b++){
                printf("%c",cad[res]); //cad[i+1] se imprime cad[i] veces.
            }
       }
    }
    printf("\n");
    return 0;
}