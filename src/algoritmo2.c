#include <stdio.h>

int max_number(int a, int b)
{
    return a * (a > b) + b * (b > a);
}

/**
 * 2 - Faça um programa que receba dois números e mostre o maior.
 */
int main(void)
{
    int n1, n2;

    printf("Digite o numero 1: ");
    scanf("%d", &n1);

    printf("Digite o numero 2: ");
    scanf("%d", &n2);

    printf("O maior numero e: %d\n", max_number(n1, n2));

    return 0;
}