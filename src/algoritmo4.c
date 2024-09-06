#include <stdio.h>

char *number_parity(int number)
{
    static char *parity[] = {
        [0] = "par",
        [1] = "impar",
    };

    return parity[number & 1];
}

/**
 * 4 – Crie um programa que leia um número fornecido pelo usuário e informe se ele é par ou ímpar.
 */
int main(void)
{
    int number;

    printf("Digite o numero: ");
    scanf("%d", &number);

    printf("O numero %d e %s!\n", number, number_parity(number));

    return 0;
}