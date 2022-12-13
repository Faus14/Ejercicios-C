#include <stdio.h>

int main(){
int a [5], b [5], c[10], i, j, x, y, d, s, g, k, f;
for(i=0;i<5;i++){
printf("\nIngrese valores para el vector A: ");
scanf("%i", &a[i]);}
for(j=0;j<5;j++){
printf("\nIngrese valores para el vector B: ");
scanf("%i", &b[j]);}
for(y=0;y<5;y++){
        if(a[y]<b[y]){
          c[y]=a[y];}
          else{c[y]=b[y];}

    printf("\nLos tres vectores son: A [%i] B [%i] C [%i] \n", a[y], b[y] ,c[y]  );}

system("pause");
system("cls");
return 0;
}
