#include <stdio.h>

struct alumnos{

    char nombre [20];

    char turno;

               };

main(){

struct alumnos alumno;
struct alumnos alumno2;

printf("ingrese el nombre del alumno: ");

gets(alumno.nombre);

printf("ingrese el turno: ");

alumno.turno=getchar();

printf("ingrese el nombre del 2 alumno: ");
getchar();
gets( alumno2 . nombre );

printf("ingrese el turno: ");

alumno2.turno=getchar();


if(alumno.turno==alumno2.turno)
{
printf("tienen el mismo turno");

}
else
{
printf("no tienen el mismo turno");

}
}

