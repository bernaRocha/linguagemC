#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    printf("Fun��o putchar()\n"); // Escreve um �nico caractere e converte n�mero para caractere

    char c = 'a';
    int x = 65;

    putchar(c);
    putchar("\n");
    putchar(x); // para mim apareceu �A�
    putchar("\n");
    system("pause");
    return 0;
}
