#include <stdio.h>



struct alumnos{

    char nombre [20];

    char legajo[5];

    char domicilio[45];

    char turno;

    };

main(){
struct alumnos alumno[10];
strcpy(alumno[0].nombre,"Juan");
printf ( "%s ",alumno[0].nombre );
}






