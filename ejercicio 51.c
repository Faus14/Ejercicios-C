#include <stdio.h>

#define inc 15

int main() {
int costo = 50, i;
for (i = 2; i<=20; i += 6){
     costo += inc;
    printf("%i\t",i); printf("%i\n",costo);
}
return 0;
}
