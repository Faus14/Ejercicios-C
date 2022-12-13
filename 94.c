#include <stdio.h>
#include <conio.h>
#include <string.h>
int main(){
char cadena1[10], cadena2[10], ret;
int cad;
printf("Ingrese una cadena de maximo 10 caracteres: ");
gets(cadena1);
printf("Ingrese otra cadena de maximo 10 caracteres: ");
gets(cadena2);
if (strcmp(cadena1,cadena2)=="-1");
printf("\nLa mayor es: %s", cadena2);
printf("\nLas cadenas concatenadas quedan: %s", strcat(cadena1,cadena2));
cad=strlen(cadena1);
if (cad<0){
    printf("\nLa cadena mas larga es: %s", cadena1);}
    else {
        printf("\nLa cadena mas larga es: %s ", cadena2);
    }
    printf("\nLa cadena invertida se lee: %s ", strrev(cadena1));

return 0;
}
