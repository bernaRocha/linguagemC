#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("Programa para verificar um c�digo ASCII de determinado caractere.\n");
    printf("Digite o caractere.\n");
    char c;
    c = getchar();
    printf("Caractere: %c\n", c);
    printf("C�dgo ASCII: %d\n", c);

    return 0;
}
