#include <stdio.h>
 int main(){
 int b[10],x,y,mayor=0,i,t;
 float suma=0,prom;
 x=0;
 while (x<10){
 printf("Ingrese nunmero %i: ", x);
 scanf("%i", &b[x]);
 x++; }
 for(y=0;y<10;y++){
 if (b[y]>=mayor){
 mayor=b[y];
 } }

 for(i=0;i<10;i++){
  suma+=b[i];}
  prom=suma/10;

 for(t=0;t<10;t++){
 printf("\nLos numeros ingresados son: %i ", b[t]);
 }
 printf("\nEl mayor de ellos es: %i ", mayor);

 printf("\n\nSu promedio es: %.1f \n", prom);

 system("pause");


 return 0;
 }
