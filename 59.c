#include <stdio.h>

int main ()
{

int i=0;

printf ("digite un numero de la semana :");
scanf("%i",&i);

switch (i){
case 1: printf("El dia es lunes");break;
case 2: printf("El dia es martes");break;
case 3: printf("El dia es miercoles");break;
case 4: printf("El dia es jueves");break;
case 5: printf("El dia es viernes");break;
case 6: printf("El dia es sabado");break;
case 7: printf("El dia es domingo");break;

}

return 0;
}
