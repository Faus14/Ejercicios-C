#include<stdio.h>
main(){
int num, i, aux=100, aux1=0;
for(i=1; i<=5; i++){
printf("Inglrese un numero: ");
scanf("%i", &num);
if (num>aux1){
aux1=num;}
if(num<aux){
aux=num;
}
}
printf("\nEl mayor es: %i", aux1);
printf("\nEl menor es: %i", aux);

return 0;
}
