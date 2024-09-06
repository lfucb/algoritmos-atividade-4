#include <stdio.h>

char *note_status(double average)
{
    int is_failed = average < 3.00;
    int should_do_exam = average >= 3.00 && average < 7.00;
    int is_approved = average >= 7.00;

    static char *message[] = {
        [0x1] = "Reprovado",
        [0x2] = "Exame",
        [0x4] = "Aprovado",
    };

    int index = is_failed + (should_do_exam << 1) + (is_approved << 2);

    return message[index];
}

/**
 * 10 - Faça um programa que receba três notas de um aluno, calcule e mostre a média
 * aritmética e a mensagem que segue a tabela abaixo. Para alunos de exame, calcule e
 * mostre a nota que deverá ser tirada no exame para aprovação, considerando que a
 * média no exame é 6,00.
 *
 *   | Média aritmética | Mensagem  |
 *   |:-----------------|:----------|
 *   | 0,00 até 2,99    | Reprovado |
 *   | 3,00 até 6,99    | Exame     |
 *   | 7,00 até 10,00   | Aprovado  |
 */
int main(void)
{
    double note1, note2, note3;

    printf("Digite a nota 1: ");
    scanf("%lf", &note1);

    printf("Digite a nota 2: ");
    scanf("%lf", &note2);

    printf("Digite a nota 3: ");
    scanf("%lf", &note3);

    double average = (note1 + note2 + note3) / 3;

    printf("Media: %.2lf\nEstado: %s\n", average, note_status(average));


    static char *exam_warning[] = {
        [0] = "",
        [1] = "Voce precisa tirar %.2lf no exame de recuperacao para passar!\n",
    };

    printf(exam_warning[average >= 3.0 && average < 7.00], 6.00 - average);

    return 0;
}
