// Fazer um algoritmo para calcular a área de um trapézio. Sabe-se que a área do trapézio é dada pelo produto da altura pela 
// soma das bases (menor e maior), dividido por 2.

#include <stdio.h>

float calcula_area_trapezio(float altura, float base1, float base2) {
    return ((base1 + base2) * altura ) / 2;
}

float main() {
    float altura, base1, base2, area;
    printf("Digite a altura do trapezio:");
    scanf("%f", &altura);
    printf("Digite a base1 do trapezio:");
    scanf("%f", &base1);
    printf("Digite a base2 do trapezio:");
    scanf("%f", &base2);

    area = calcula_area_trapezio(altura, base1, base2);

    printf("Area do trapezio: %.2f\n", area);
    return 0;
}
