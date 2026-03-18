// Sabe-se que ângulos podem ser medidos em uma unidade chamada grado, e que 1 grado equivale a 9/10 graus. Fazer um 
// algoritmo que receba um valor em graus e mostre a quantos grados ele corresponde.

#include <stdio.h>

float calcula_grados(float angulo) {
    float grado = angulo * 9.0 / 10.0;
    return grado;
}

float main() {
    float angulo, resultado;

    printf("Digite o ângulo, em graus, a ser convertido:");
    scanf("%f", &angulo);

    resultado = calcula_grados(angulo);
    printf("O valor em grados é: %.2f\n", resultado);

    return 0;
}