#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char c,car,cad[51]; //Existe un espacio extra en cad[] para el valor nulo.
    unsigned int lg,n;
    n=0;

    printf("Ingrese cadena de caracteres:\n");
    fgets(cad, 51,stdin); //fgets asegura que se tomen solo 50 caracteres.
    if(!strchr(cad, '\n')) { //Elimina caracteres extra si se ingresaron más de 50
        while(fgetc(stdin)!='\n');}
    printf("Ingrese caracter a evaluar:\n");
    scanf("%c",&car);

    lg=strlen(cad); //Obtiene el largo de la cadena.

    for (int i = 0; i < lg; i++){

        if (tolower(cad[i])==tolower (car)){ //Compara minúscula de cad[] y car.
            n=n+1;
        }
    }

    printf("El caracter se repite %u veces \n",n);
    return 0;
}