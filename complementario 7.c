#include <stdio.h>
#include <string.h>
#include <ctype.h>
int verificadigitos(char*cadena, int*c){
    int i;
    for(i=0;i<strlen(cadena);i++){
    if (isdigit(cadena[i]))
        (*c)++;}
   return strlen(cadena);


}

int main(){
char cadena[10];
int cant=0,i=0;
printf("Ingrese una cadena: ");
gets(cadena);

i=verificadigitos(cadena,&cant);

printf("La cadena %s tiene una longitud de %i y la cantidad de digitos es %i.",cadena, i, cant);

return 0;
}
