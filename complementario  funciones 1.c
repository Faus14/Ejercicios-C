#include <stdio.h>
#include <math.h>
int cubo(int base){
 double j,g;
j=base;
g=pow(j, 3);
return g;}

int main(){
int i;
for(i=1; i<=5; i++)
printf("El cubo de %i es : %i\n",i, cubo(i));

return 0;
}

