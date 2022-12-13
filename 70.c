#include <stdio.h>

int main()
{
int i;
int e;
int cont=0;

printf("digite 2 numeros :");
scanf("%d",&i);
scanf("%d",&e);

for(i+=1;i<e;i++ )
{
if (i%2==0)
{
cont++;
printf("\n numeros pares:%d",i);



}
}
printf("\n El numero de pares es: %d",cont);
}
