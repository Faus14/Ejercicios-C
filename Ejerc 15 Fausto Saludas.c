#include <stdio.h>
#include <string.h>

int main(){
char gg[6], k[7]="abcdxyz";
int p,d;
int t=0;
int o=0;
printf("Ingrese una cadena de 6 caracteres: ");
scanf(" %s",&gg);
while (strlen(gg)!=6){
printf("\nNo es una cadena de 6 caracteres vuelva a ingresar: ");
scanf(" %s",&gg);};
for(p=0;p<6;p++){
if(gg[p]=='a' || gg[p]=='b' || gg[p]=='c' || gg[p]=='d' || gg[p]=='x'|| gg[p]=='y' ||gg[p]=='z'){
o++;}}
if(o==6){
printf("\n %.6s pertece al alfabeto dado\n",gg);
printf("\nSu prefijo es:");
while(t<3){
printf("%c",gg[t]); t++;}
printf("\nSu sufijo es:");
for(d=3;d<6;d++){
printf("%c",gg[d]);}
printf("\n");
}
else{
printf("\n %.6s no pertenece al alfabeto\n", gg);
    }

   system("pause");
    system("cls");
    return 0;
}
