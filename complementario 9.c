#include <stdio.h>
#include <string.h>
void carga(char* text, int*con){
    while ( (text[*con] = getchar()) !=EOF && *con<500){
        if(text[*con]!='\n' && text[*con]!=' ')
    *con=*con+1;}

        text[*con+1]='\0';
        }

void esvocal (char text,int*con){
int i,k=0;
    if(text=='a'||text=='e'||text=='i'||text=='o'||text=='u' ){
       *con=*con+1;
    }
}
int esconsonante(char text){
int k=0;
    if(text!='a'&& text!='e'&& text!='i'&& text!='o'&& text!='u' ){
        k++;}
return k;}
int main(){
char texto[500];
int cont=0, vocc=0, j=0, f, tot=0, tot1=0;
printf("Ingrese texto: \n");
carga(texto,&cont);
for(f=0;f<cont;f++){
esvocal(texto[f],&vocc);
j+=esconsonante(texto[f]);}
tot=vocc*100/cont;
tot1=j*100/cont;
printf("El texto %s tiene %i%% de vocales y %i%% de consonantes", texto, tot, tot1);

}
