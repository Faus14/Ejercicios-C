#include <stdio.h>
int buscomay(int a[]){
int res=0, j;
for(j=0; j<10; j++){
    if (a[j]>=res){
        res=a[j];
    }
}
return res;}
float prom(int a[]){
float res;
int i,suma=0;
for (i=0;i<10;i++){
    suma+=a[i];
}
res=suma/10;
return res;
}


int main(){
int num[10], i, k;
for(i=0; i<10; i++){
    printf("Ingrese numero %i: ", i);
    scanf("%i", &num[i]);
}
printf("Los numeros son: ");
for(i=0; i<10; i++){
        printf("%i ", num[i]);
    }
printf("\nEl mayor de ellos es: %i\n", buscomay(num));
printf("El promdio es: %.2f", prom(num));
return 0;
}
