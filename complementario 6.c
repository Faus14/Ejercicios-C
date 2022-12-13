#include <stdio.h>
#include <string.h>

void micopy (char *cad1, char *cad2){
strcpy(cad1,cad2);
}
void main() {
char cadena1[10], cadena2[10];
printf("Ingrese una cadena: ");
scanf(" %s", cadena2);
micopy(cadena1,cadena2);
printf("La cadena es: %s ", cadena1);}
