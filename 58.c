#include <stdio.h>

int main ()
{
char letra;
int i;
int cont=0,conta=0;

printf ("digite una palabra de 10 letras :");
for(i=0;i<10;i++)
{
scanf("\n%c",&letra);

switch(letra)
{
case'a': conta+=+1;break;
case'e': cont+=+1;break;
case'i': cont+=+1;break;
case'o': cont+=+1;break;
case'u': cont+=+1;break;
}
}
printf("\n hay esta cantidad de letras A:%d",conta);
printf("\n hay esta cantidad de letras E,I,O,U:%d",cont);

}

