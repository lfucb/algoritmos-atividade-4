#include <stdio.h>

char average_concept(double average)
{
    static char concept[] = {
        [0] = 'E',
        [1] = 'E',
        [2] = 'E',
        [3] = 'E',
        [4] = 'E',
        [5] = 'D',
        [6] = 'C',
        [7] = 'B',
        [8] = 'A',
        [9] = 'A',
        [10] = 'A',
    };

    return concept[(int) average];
}

/**
 * 9 - A nota final de um estudante é calculada a partir de três notas atribuídas
 * respectivamente a um trabalho de laboratório, a uma avaliação semestral e a um exame
 * final. A média das três notas mencionadas anteriormente obedece aos pesos a seguir:
 *
 *   | Nota                    | Peso |
 *   |:------------------------|:-----|
 *   | Trabalho de laboratório | 2    |
 *   | Avaliação semestral     | 3    |
 *   | Exame final             | 5    |
 *
 * Faça um programa que receba as três notas, calcule e mostre a média ponderada e o
 * conceito que segue a tabela abaixo:
 *
 *   | Média ponderada | Conceito |
 *   | 8,00 até 10,00  | A        |
 *   | 7,00 até 7,99   | B        |
 *   | 6,00 até 6,99   | C        |
 *   | 5,00 até 5,99   | D        |
 *   | 0,00 até 4,99   | E        |
 */
int main(void)
{
    double note1, note2, note3;

    printf("Digite a nota do trabalho de laboratorio (0,00 até 10,00): ");
    scanf("%lf", &note1);
    printf("Digite a nota da avaliacao semestral (0,00 até 10,00): ");
    scanf("%lf", &note2);
    printf("Digite a nota do exame final (0,00 até 10,00): ");
    scanf("%lf", &note3);

    double average = note1 * 0.2 + note2 * 0.3 + note3 * 0.5;

    printf("Media final: %.2lf (%c)\n", average, average_concept(average));

    return 0;
}
