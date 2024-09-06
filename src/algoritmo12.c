#include <stdio.h>

double salary_bonus(double salary)
{
    static double bonus_percent[] = {
        [0x1] = 0.05,
        [0x2] = 0.12,
        [0x4] = 0.00,
    };

    int is_below_500 = salary < 500.00;
    int is_between_500_and_1200 = salary > 500.00 && salary <= 1200.00;
    int is_above_than_1200 = salary > 1200.00;

    int index = is_below_500 + (is_between_500_and_1200 << 1) + (is_above_than_1200 << 2);

    return salary * bonus_percent[index];
}

double salary_allowance(double salary)
{
    static double allowance[] = {
        [0] = 150.00,
        [1] = 100.00,
    };

    return allowance[salary > 600.0];
}

/**
 * 12 - Faça um programa que receba o salário de um funcionário, calcule e mostre o novo
 * salário desse funcionário, acrescido de bonificação e de auxílio-escola.
 *
 *   | Salário                         | Bonificação         |
 *   |:--------------------------------|:--------------------|
 *   | Até R$ 500,00                   | 5% do salário       |
 *   | Entre R$ 500,01 até R$ 1.200,00 | 12% do salário      |
 *   | Acima de  R$ 1.200,00           | Não tem bonificação |
 *
 *   | Salário            | Auxílio-escola |
 *   |:-------------------|:---------------|
 *   | Até R$ 600,00      | R$ 150,00      |
 *   | Mais que R$ 600,00 | R$ 100,00      |
 */
int main(void)
{
    double salary;

    printf("Digite o salario (R$): ");
    scanf("%lf", &salary);

    double new_salary = salary + salary_bonus(salary) + salary_allowance(salary);

    printf("Salario final: R$ %.2lf\n", new_salary);

    return 0;
}
