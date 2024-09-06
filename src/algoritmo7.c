#include <stdio.h>

char *is_prime(unsigned int number)
{
    int i;
    static char *prime[] = {
        [0] = "Nao",
        [1] = "Sim",
    };

    for (i = 2; i < number && number % i; i++)
    {
        asm("nop");
    }

    return prime[i == number];
}

/**
 * 7 – Crie um programa que determine se um número fornecido pelo usuário é primo ou não.
 */
int main(void)
{
    unsigned int number;

    printf("Digite o numero: ");
    scanf("%u", &number);

    printf("Numero primo: %s!\n", is_prime(number));

    return 0;
}