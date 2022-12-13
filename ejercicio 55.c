#include<stdio.h>

int main(){
int n, cuad;
printf("Ingrese un numero:");
scanf("%i", &n);
if (n>0){
cuad = n*n;
printf("\n\tEl cuadrado de %i es: %i\n", n, cuad);}
  else{
printf("\n\tERROR, el numero debe ser mayor a cero.\n");
}
return 0;
}
