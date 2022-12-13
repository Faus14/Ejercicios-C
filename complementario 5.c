#include<stdio.h>
#include<string.h>

struct alumnos{

char apellido[10];
char nombre[10];
float altura;


};
main(void){
struct alumnos alumno[5];

float y;
int l;
y=0;
int pos;
pos=0;
int x;
x=0;
while(x<5){
printf(" ingrese nombre del alumno %i:",x);
scanf("%s",&alumno[x].nombre);
printf(" ingrese apellido del alumno %i: ",x);
scanf("%s",&alumno[x].apellido);
printf(" ingrese la altura del alumno:");
scanf("%f",&alumno[x].altura);
printf("\n");
x++;
}
for(l=0;l<5;l++){
           if(alumno[l].altura>y)
             {y=alumno[l].altura;
               pos=l;
             }
}
printf("La mayor altura es %.1f ",y);
printf("\n");
printf("El alumno con mayor altura es %s ",alumno[pos].nombre);

}





