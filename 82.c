#include <stdio.h>

int main()
{
int numeros[10];
int t;
int mayor;
int tot=0;
int i;
for(t=0; t<10; ++t)
{
printf("ingrese 10 numeros:");
scanf("%d",&numeros[t]);
}
printf("ingrese otro numero");
scanf("%d",&mayor);
for(i=0;i<=9;++i)
{

if(numeros[i]>=mayor) tot+=numeros[i];


}
printf("LA SUMA TOTAL ES: %d",tot);
}
