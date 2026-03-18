// Fazer um algoritmo para  calcular a  área de um círculo. Sabe-se que a  área  do círculo é dada pelo produto do raio ao 
// quadrado pela constante π = 3.14. No fluxograma e pseudocódigo, represente π como ‘pi’.

#include <stdio.h>
#include <math.h>

float calcular_area_circulo(float raio) {
    float pi = 3.14;
    return pow(raio, 2.0) * pi;
}

float main() {
    float raio, area;
    printf("Digite o raio do circulo:");
    scanf("%f", &raio);

    area = calcular_area_circulo(raio);
    printf("Area do circulo: %.2f\n", area);

    return 0;
}
