#include <stdio.h>
main() {
int num ,* punt , tol;
num=8;
punt= &num;
tol=*punt;
printf("el total es: %d ",tol);
}
