#include <stdio.h>
#include <string.h>
void cambiar(char *c1,char *c2)
{
    while (*c1 && (*c1 == *c2))
    {
        printf("1");
        c1++;
        c2++;
    }
}

int main()
{
    char cadena1[100];
    char cadena2[100];
    printf("Ingrese primer texto:\n");
    gets(cadena1);
    printf("Ingrese segundo texto:\n");
    gets(cadena2);
    cambiar(cadena1,cadena2);

    return 0;
}
