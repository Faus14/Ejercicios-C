#include <stdio.h>
#include <conio.h>
char cadena[10];
char i=0;
int cont=0, cont1=0;
int main(){
printf("Ingrese una frase:");
gets(cadena);

do {
if(cadena[i]==' '){
cont++;}
if (cadena[i]>='a' && cadena[i]<='z')
    {
  cont1++;}
i++;

} while (i<10);

printf("\nLa cantidad de no digitos es: %i ", cont1);

printf("\nLa cantidad de blanco es: %i ", cont);

return 0;
}
