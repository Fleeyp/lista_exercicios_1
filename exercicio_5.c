// Fazer um algoritmo para converter uma temperatura de graus Fahrenheit para graus Celsius. A fórmula de conversão é: 
// C = (F – 32) * (5 / 9)

#include <stdio.h>

float converter_temperatura(float temp_fahr) {
    float temp_celsius = (temp_fahr - 32) * 5.0 / 9.0;
    return temp_celsius;
}

int main () {
    float temp_fahr, resultado;

    printf("Digite a temperatura em Fahrenheit:");
    scanf("%f", &temp_fahr);

    resultado = converter_temperatura(temp_fahr);
    printf("A temperatura convertda para Celsius é: %.2f\n", resultado);

    return 0;
}