#include <stdio.h>



struct alumnos{

    char nombre [20];

    char  legajo[5];

    char  domicilio[15];

    char turno;

};



main(){



struct alumnos alumno;



printf("ingrese el nombre del alumno: ");

gets(alumno.nombre);

printf("ingrese el legajo: ");

gets(alumno.legajo);

printf("ingrese el domicilio: ");

gets(alumno.domicilio);

printf("ingrese el turno: ");

alumno.turno=getchar();

printf("los datos del alumno son: \nnombre: %s \nlegajo: %s \ndomicilio: %s \nturno: %c",alumno.nombre,alumno.legajo,alumno.domicilio,alumno.turno);


}

