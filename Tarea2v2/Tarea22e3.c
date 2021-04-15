#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {

char *point;
char cad[]="7EB3A50110140F3955025607EB7A50110140F39577301887EB3A50110140F3955025607EB7A50110140F39577301887EB3A50110140F3955025607EB7A50110140F39577301887EB3A50110140F3955025607EB7A50110140F39577301887EB3A50110140F3955025607B7A50110140F39577301887EB3A50110140F3955025607EB7A50110140F3957730188";   
int k=0 ;

point = strtok(cad, "E"); 
   while(point!=NULL){ //seguir mientras no termine el texto
         if (point[1] -'0' == 3){ /* es igual a tres imprime la temperatura*/
            printf("la temperatura es: %c",point[17]);
            printf("%c\n", point[18]);
            }
         else{ // es igual a tres imprime la humedad
            printf("la humedad es: %c",point[17]);
            printf("%c", point[18]);
            printf("%c\n", point[19]);
             }
         point = strtok(NULL,"E");
         k++; 
      }
   return 0;
}

