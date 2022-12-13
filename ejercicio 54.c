#include<stdio.h>

int main(){
float suma, aux;
int i, n;
printf("Ingrese cantidad de numeros:");
scanf("%i",&n);
for(i=0; i<n; i++){
printf("Ingrese numero %i:",i+1);
scanf("%f", &aux);
suma+=aux;
}
printf("La media es:%.2f", (suma/2));
return 0;
}
