#include <stdio.h>
#include <ctype.h>
#include <string.h>

char* verif(char* cad){
 int j,i ;
 for(i=0;i<strlen(cad);i++)
   j=isalnum(cad[i]);
if(j!=0){
    printf("Si");}
    else {
        printf("No");
    }

}
int main(){
char cadena[10];

printf("Ingrese una cadena: ");
gets(cadena);

verif(cadena);
}
