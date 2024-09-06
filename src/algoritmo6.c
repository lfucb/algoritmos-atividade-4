#include <stdio.h>

char *triangle_type(unsigned int side1, unsigned int side2, unsigned int side3)
{
    unsigned int is_valid = ((side1 + side2 > side3) + (side1 + side3 > side2) + (side2 + side3 > side1)) == 3;
    unsigned int is_equilateral = (side1 == side2 && side2 == side3);
    unsigned int is_scalene = (side1 != side2 && side1 != side3 && side2 != side3);
    unsigned int is_isosceles = !is_equilateral && (side1 == side2 || side1 == side3 || side2 == side3);

    static char *type[] = {
        [0x0] = "invalido",
        [0x1] = "equilatero",
        [0x2] = "isosceles",
        [0x4] = "escaleno",
    };

    unsigned int type_index = (is_equilateral + (is_isosceles << 1) + (is_scalene << 2)) * is_valid;

    return type[type_index];
}

/**
 * 6 - Faça um programa que solicite ao usuário os comprimentos de três lados de um
 * triângulo. Verifique se esses comprimentos formam um triângulo válido, ou seja, a soma
 * de quaisquer dois lados deve ser maior que o terceiro lado. Se for válido, determine o
 * tipo (equilátero, isósceles ou escaleno).
 */
int main(void)
{
    unsigned int side1, side2, side3;

    printf("Digite o lado 1: ");
    scanf("%u", &side1);
    
    printf("Digite o lado 2: ");
    scanf("%u", &side2);

    printf("Digite o lado 3: ");
    scanf("%u", &side3);

    printf("O triangulo e %s!\n", triangle_type(side1, side2, side3));
    
    return 0;
}