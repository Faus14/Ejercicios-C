#include <stdio.h>

int main(){
 char alfa[4]={'z','x','y','\0'};
 int i,j,k;

printf("Las posibles combinaciones del alfabeto V=(z,x,y) son: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++){

        for(k=0;k<3;k++){
            printf("%c", alfa[i]);
            printf("%c", alfa[j]);
            printf("%c", alfa[k]);
            printf("\n");}}

    }system("pause");
    system("cls");
    return 0;
}
