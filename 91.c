#include <stdio.h>
int main(){
int vec[10],i,j,x,y=0,k, aux,o, h;
while (y<10){
printf("Ingrese 10 numeros: ");
scanf("%i", &vec[y]);
if (vec[y]==0){
printf("ERROR, el numero tiene que ser distinto de 0\n");
y--;}
y++;
}
system("cls");
printf("\nLos numeros ingresados son:");
for(o=0;o<10;o++){
printf("\n___________:%i", vec[o]);
}
k=0;
while(k<10){
if (vec[k]<0){
 for(i=0;i<10;i++){
  for(j=i+1; j<=10;j++){
  if(vec[i]<vec[j]){
  aux=vec[i];
  vec[i]=vec[j];
  vec[j]=aux;}
  }
 }
}
else{
if(vec[k]>0){
for(i=0;i<10;i++){
for(j=i+1;j<10;j++){
  if(vec[i]>vec[j]){
  aux=vec[i];
  vec[i]=vec[j];
  vec[j]=aux;}}}}}
  k++;}


    printf("\nQuedaron ordenados de la siguiente manera: ");
    for(h=0;h<10;h++){
    printf("\n____________%i\n", vec[h]);
}
system("pause");
system("cls");
return 0;
}
