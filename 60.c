#include <stdio.h>

int main()
{
int i,n=0;
for(i=1;i<=100;i++){

if(i%2==0){
printf("%i   ",i);
n+=1;
}
if(n==6){
   n=0;
   printf("\n");

}
}
return 0;
}
