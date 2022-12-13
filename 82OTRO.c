#include <stdio.h>

int main(){

int numeros[10], i, num, cont=1, sumatoria=0;

for(i=0; i<10; i++)
{
    printf("Ingrese un numero:");
    scanf("%d",&numeros[i]);
}
printf(" Ingrese otro numero:");
scanf("%d",&num);
 while (numeros[cont]>=num){
    sumatoria+=numeros[cont];
    cont++;

}
printf("\nLa sumatoria de los numeros mayores que es: %i",sumatoria);

return 0;
}
