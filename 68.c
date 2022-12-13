#include<stdio.h>

main(){

int n1,n2,n3;

printf("Ingrese dos numeros para el intervalo: ");
scanf("%i%i", &n1, &n2);
printf("\nInglrese un numero");
scanf("%i", &n3);
if(n3>n1 && n3<n2){
printf("\nEl numero %i pertenece al intervalo", n3);
}


return 0;
}
