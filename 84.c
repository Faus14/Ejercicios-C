#include <stdio.h>
#include <math.h>
int main(){
int bidim[2][3], i, t, x, y,num,nu,min=0,fila, colum,c;

for(i=0;i<2;i++){
 for(t=0;t<3;t++){
 printf("Ingrese un numero en la posicion [%i][%i]:", i, t);
 scanf("%i", &bidim[i][t]);
}}
for(x=0;x<2;x++){
 for(y=0;y<3;y++){
 if(bidim[x][y]>=min){
 min=(bidim[x][y]);
 fila=x;
 colum=y;
 }
 }
}
c=fabs(min);
printf("\nEl valor absoluto de %i es %i y se encuentra en la posicion: [%i][%i] \n", min, c, fila, colum);
system("pause");
return 0;
}
