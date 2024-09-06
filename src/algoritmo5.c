#include <stdio.h>

char *is_leap_year(unsigned int year)
{
    static char *leap_year[] = {
        [0] = "Nao",
        [1] = "Sim",
    };

    return leap_year[(year % 4) == 0 && (year % 100 == 0) + (year % 400 == 0) != 1];
}

/**
 * 5 – Escreva um programa que verifique se um ano informado pelo usuário é bissexto ou não.
 */
int main(void)
{
    unsigned int year;

    printf("Digite o ano: ");
    scanf("%u", &year);

    printf("Ano bissexto: %s!\n", is_leap_year(year));

    return 0;
}