#include<stdio.h>

int main(){

int i, suma=0, producto=1, num;
for(i=1; i<=10; i++){
printf("\nIngrese numero %i: ", i);
scanf("%i", &num);
if (num>0){
suma+=num;}
else{
producto*=num;}
}
printf("\nLa suma de los positivos es:%i", suma);

printf("\nEl producto de los negativos es:%i", producto);

return 0;
}
