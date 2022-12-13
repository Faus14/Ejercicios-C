#include<stdio.h>

int main(){
int num[10], i, j, x, y, k, aux;
for(i=0;i<10;i++){
printf("\nIngrese el numero %i: ", i);
scanf("%i", &num[i]);}
system("cls");
for(k=0;k<10;k++){
    printf("\nLos numeros ingresados son: %i\n", num[k]);
}
for(x=0;x<10;x++){
 for(y=x+1;y<10;y++){
 if (num[x]<num[y]){
 aux=num[x];
 num[x]=num[y];
 num[y]=aux;}
 }

}

for(j=0;j<10;j++)
printf("\n\nOrdenados en forma decreciente: %i\n", num[j]);

system("pause");
system("cls");
return 0;
}
