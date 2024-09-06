#include <stdio.h>

/**
 * 8 - Escreva um programa que leia o salário de uma pessoa e calcule o imposto de renda
 * baseado na tabela abaixo:
 *
 *   - Até R$ 2.000: isento
 *   - De R$ 2.001 a R$ 4.000: 10% de imposto
 *   - Acima de R$ 4.000: 20% de imposto
 *
 * O programa deve exibir o valor do imposto a ser pago.
 */
int main(void)
{
    double salary;

    printf("Digite o seu salario (R$): ");
    scanf("%lf", &salary);

    double tax = (salary > 2001.0) * 0.1;
    tax += (salary > 4000.0) * 0.1;

    printf("Imposto a ser pago: R$ %.2lf (%d%%)\n", salary * tax, (int)(100 * tax));

    return 0;
}