#include <stdio.h>

int max2_number(int a, int b)
{
    return a * (a > b) + b * (b > a);
}

int max3_number(int a, int b, int c)
{
    int max2 = max2_number(a, b);

    return max2_number(max2, c);
}

/**
 * 3 - Faça um programa que receba três números e mostre o maior.
 */
int main(void)
{
    int n1, n2, n3;

    printf("Digite o numero 1: ");
    scanf("%d", &n1);

    printf("Digite o numero 2: ");
    scanf("%d", &n2);

    printf("Digite o numero 3: ");
    scanf("%d", &n3);

    printf("O maior numero e: %d\n", max3_number(n1, n2, n3));

    return 0;
}