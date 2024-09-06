#include <stdio.h>

char *number_is(int number)
{
    static char *type[] = {
        [0] = "negativo",
        [1] = "positivo",
        [2] = "zero",
    };

    return type[(number >= 0) + (number == 0)];
}

/**
 * 1 - Faça um programa que receba um número e informe se ele é positivo, negativo ou zero.
 */
int main(void)
{
    int number;

    printf("Digite o numero: ");
    scanf("%d", &number);

    printf("O numero e %s!\n", number_is(number));

    return 0;
}