#include <stdio.h>

int main()
{
    int contador, n, primo;

    printf( "\n   " );

    for ( n = 1 ; n <= 100 ; n++ )
    {
        primo = 1;
        contador = 2;

        while ( contador <= n / 2 && primo )
        {
            if ( n % contador == 0 )
                primo = 0;

            contador++;
        }

        if ( primo )
            printf( "\nLos numeros primos entre 1 y 100 son :%d ", n );
    }


    return 0;
}
