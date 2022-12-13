#include <stdio.h>
int main()
{


int num;
int i;
int mul;
printf("Ingrese un numero:");
scanf("%d",&num);
for(i=1;i<=10;i++)
{
mul=i*num;
printf("\n%dx%d=%i",num,i,mul);
}

}
