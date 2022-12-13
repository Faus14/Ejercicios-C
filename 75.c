# include <stdio.h>
void main() {
    int contc=0, contp=0, contl=0;
    char c, cAnt=' ';
    printf ("Ingrese el texto: \n\n");
    c=getchar();
    while (c!=EOF) {
        contc++;
        if (c == '\n') {
            contl++;
        }
        if ((c==' ' || c==',' || c==';' || c=='.' || c==':' || c=='\t' || c=='\n') && cAnt!=' ' && cAnt!=',' && cAnt!=';' && cAnt!='.' && cAnt!=':' && cAnt!='\t' && cAnt!='\n') {
            contp++;
        }
        cAnt = c;
        c=getchar();
    }
    printf("\n\nCaracteres = %d\n",contc);
    printf("Palabras = %d\n",contp);
    printf("Lineas = %d\n",contl);
    system("pause");
}
