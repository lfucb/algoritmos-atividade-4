#include <stdio.h>

typedef struct position_s {
    char *name;
    double increase_percent;
} position;

position *get_position(unsigned int id)
{
    static position positions[] = {
        [1] = { .name = "Escriturario", .increase_percent = 0.50 },
        [2] = { .name = "Secretario", .increase_percent = 0.35 },
        [3] = { .name = "Caixa", .increase_percent = 0.20 },
        [4] = { .name = "Gerente", .increase_percent = 0.10 },
        [5] = { .name = "Diretor", .increase_percent = 0.00 },
    };

    return &positions[id];
}

/**
 * 11 - Faça um programa que receba o código correspondente ao cargo de um funcionário
 * e seu salário atual e mostre o cargo, o valor do aumento e seu novo salário. Os cargos
 * estão na tabela a seguir.
 *
 *   | Código | Cargo        | Percentual |
 *   |:-------|:-------------|:-----------|
 *   | 1      | Escriturário | 50%        |
 *   | 2      | Secretário   | 35%        |
 *   | 3      | Caixa        | 20%        |
 *   | 4      | Gerente      | 10%        |
 *   | 5      | Diretor      | N/A        |
 */
int main(void)
{
    unsigned int position_id;
    double salary;

    printf("Digite o codigo do cargo atual: ");
    scanf("%u", &position_id);

    printf("Digite o salario atual (R$): ");
    scanf("%lf", &salary);


    position *current_position = get_position(position_id);

    double increase = salary * current_position->increase_percent;

    printf(
        "Cargo: %s\nAumento: R$ %.2lf\nNovo salario: %.2lf\n",
        current_position->name,
        increase,
        salary + increase
    );

    return 0;
}
