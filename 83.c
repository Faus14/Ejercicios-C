#include <stdio.h>
int main(){

int vec[10], i, t, j, h, aux;
char o;

for(t=0; t<10; t++)
{
printf("ingrese 10 numeros: ");
scanf("%d", &vec[t]);
}
printf("\n Ingrese forma de ordenamiento A ascendente y D descendente: ");
scanf(" %c", &o);

if (o =='a'){
 for(i=0;i<10;i++){
  for(j=i+1; j<=10;j++){
  if(vec[i]>vec[j]){
  aux=vec[i];
  vec[i]=vec[j];
  vec[j]=aux;}
  }
 }
for(h=0;h<10;h++){
    printf("%i  ", vec[h]);
}
}

else{
for(i=0;i<10;i++){
for(j=i+1; j<10;j++){
  if(vec[i]<vec[j]){
  aux=vec[i];
  vec[i]=vec[j];
  vec[j]=aux;}}}

  for(h=0;h<10;h++){
    printf("%i  ", vec[h]);
}
}
return 0;
}
