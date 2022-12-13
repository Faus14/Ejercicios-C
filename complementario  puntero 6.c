
#include <stdio.h>
#include <string.h>

char micopy(char s1[8], char s2[8]){

   return strcpy( s1, s2 );

};

char main(){
char pal1[8];
char pal2[8]="faus";

printf( "s1=%s\n", micopy(pal1,pal2) );
}
