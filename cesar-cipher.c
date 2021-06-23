#include <stdio.h>

#define TAMANHO_TEXTO 4
#define QTD_LETRAS 26

void main()
{
    int i = 0;
    char texto[TAMANHO_TEXTO];

    printf("Digite as letras a serem encriptografadas (em caixa alta): \n");

    for(i = 0; i < TAMANHO_TEXTO; i++)
    {
        scanf("%c", &texto[i]);
    }

    for(i = 0; i < TAMANHO_TEXTO; i++)
    {
        texto[i] = 'A' + (texto[i] - 'A' + 3) % QTD_LETRAS;
    }

    for(i = 0; i < TAMANHO_TEXTO; i++)
    {
        printf("%c", texto[i]);
    }
}