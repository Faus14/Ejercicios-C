#include <stdio.h>
int main()
{
int i=0;
int e;
printf("digite el numero que quiera:");
scanf("%d",&i);
while (i!=0){
for(e=1;e<=i;e++)
{

if(e%2==0)
{printf("\n MULTIPOS DE 2:%d",e);}

}
printf("\ndigite el numero que quiera:");
scanf("%d",&i);
}
return 0;
}
