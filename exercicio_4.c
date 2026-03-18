// Fazer um algoritmo para converter uma temperatura de graus Celsius para graus Fahrenheit. A fórmula de conversão é: 
// F = C * (9 / 5) + 32 

#include <stdio.h>

float converter_temperatura(float temp_celsius) {
    float fahrenheit = (temp_celsius * 9.0 / 5.0) + 32;
    return fahrenheit;
}

float main() {
    float temp_celsius, resultado;

    printf("Digite a temperatura em Celsius:");
    scanf("%f", &temp_celsius);

    resultado = converter_temperatura(temp_celsius);
    printf("A temperatura convertida para Fahrenheit é: %.2f\n", resultado);

    return 0;
}