// Fazer um algoritmo para encontrar a raiz de uma função do primeiro grau

#include <stdio.h>

float calcula_raiz(float a, float b) {
    float raiz = - (b / a);
    return raiz;
}

float main() {
    float a, b, raiz;

    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);

    raiz = calcula_raiz(a, b);
    printf("Raiz desta funcao afim: %.2f\n", raiz);

    return 0;
}