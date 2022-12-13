#include <stdio.h>

int main(){
int vec[3], i=0,x=0,y, suma=0,j, num;
char op='s';
for(j=0;j<3;j++){
vec[j]=0;}
while(x<3){
op='s';
while(op=='s'){
printf("\nIngrese los numeros a sumar en %i: ", x);
scanf("%i", &suma);
vec[x]+=suma;
printf("\nDesea seguir sumando numeros: ");
scanf(" %c", &op);
}
x++;}
for(y=0;y<3;y++)
printf("\nElemento %i suma total: %i\n", y, vec[y]);

system("pause");
return 0;
}
