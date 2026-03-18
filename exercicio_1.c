// Fazer um algoritmo para calcular a área de um triângulo. Sabe-se que a área do triângulo é dada pelo produto da base 
// pela altura, dividido por 2.

#include <stdio.h>

float calcula_area_triangulo(float base, float altura) {
    return (base * altura / 2.0);
}

float main() {
    float base, altura, area;
    printf("Digite o valor da base do triângulo:");
    scanf("%f", &base);
    printf("Digite o valor da altura do triângulo:");
    scanf("%f", &altura);
    
    area = calcula_area_triangulo(base, altura);

    printf("Área: %.2f\n", area);
    return 0;
}

