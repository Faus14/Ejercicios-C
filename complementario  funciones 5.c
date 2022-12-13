#include <stdio.h>
int primo(int a){
  int res=0;
    int i;
    for(i=1;i<=a;i++){
        if (a%i==0){
            res++;}}
    return res;}

int main(){
    int num;
printf("ingrese un numero: ");
scanf("%i", &num);
if (primo(num)==2){
 printf("El numero %i es primo", num);}
 else{
    printf("El numero %i no es primo", num);
 }
return 0;
}
