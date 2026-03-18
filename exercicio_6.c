// Fazer um algoritmo para converter um ângulo de graus para radianos. A fórmula de conversão é: rad = graus * π / 180, 
// onde π = 3.14. 

#include <stdio.h>

float converter_angulo(float angulo) {
    float rad = angulo * 3.14 / 180;
    return rad;
}

int main() {
    float angulo, resultado;

    printf("Digite o valor do ângulo:");
    scanf("%f", &angulo);

    resultado = converter_angulo(angulo);
    printf("A conversão para radianos resultou em: %.3f\n", resultado);

    return 0;
}