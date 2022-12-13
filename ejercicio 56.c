#include <stdio.h>

int main(){
int i=1, num, mayor=0, menor=0;

while(i<=10){
printf("\nIngrese un numero:");
scanf("%i", &num);
if (num>0){
mayor +=1;}
else{
menor +=1;}
i++;
}
printf("Los mayores a 0 son:%i", mayor);
printf("\nLos menores a 0 son:%i",menor);
return 0;
}
