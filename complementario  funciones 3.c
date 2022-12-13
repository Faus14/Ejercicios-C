#include <stdio.h>
#define PI 3.14
float circunferencia(float r){
float res;
res= PI*(r+r);
return res;
}
float area(float r){
float res;
res=PI*r*r;
return res;
}
int main(){
float radio;
printf("Ingrese el RADIO: ");
scanf("%f", &radio);
printf("Su Diametro es: %.2f\n", 2*radio);
printf("Su circunferencia es: %.2f\n", circunferencia(radio));
printf("Su area es: %.2f\n", area(radio));
return 0;
}
