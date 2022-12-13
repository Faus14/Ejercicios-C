#include <stdio.h>
int suma(int a, int b){
int res;
res=a+b;
printf("La suma es: %i\n", res);
return res;
}
int restar (int a, int b){
int res;
res=a-b;
printf("La resta es: %i\n", res);
return res;
}
int multiplicar(int a, int b){
int res;
res=a*b;
printf("La multiplicacion es: %i\n", res);
return res;
}
int dividir (int a, int b){
float res;
res=a/b;
printf("La division es: %.1f", res);
return res;
}
int main(){
int num1, num2, op;
do{
printf("Ingrese dos numeros: ");
scanf("%i%i", &num1, &num2);
printf("1-SUMAR\n");
printf("2-RESTAR\n");
printf("3-MULTIPLICAR\n");
printf("4-DIVIDIR\n");
printf("0-SALIR\n");
printf("Ingrese una opcion: \n");
scanf("%i",&op);
switch (op){
case 1: suma(num1, num2);break;
case 2: restar(num1, num2);break;
case 3: multiplicar(num1, num2);break;
case 4: dividir(num1, num2);break;
case 0: break;
}}while(op!=0);

return 0;
}
