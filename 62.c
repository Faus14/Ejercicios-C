#include <stdio.h>

int main()
{
int numero;
int total=0;
for(numero=3;numero<=99;numero++)
{
if ( numero%3==0 )
{
total+=numero;
printf("\t%d",numero);
}
}
printf("\nLA SUMATORIA DE TODOS LOS MULTIPLOS ES:%d",total);
}
