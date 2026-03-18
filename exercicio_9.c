// Fazer um algoritmo para  calcular o novo salário de  um funcionário. Sabe-se que  os  funcionários  que  ganham até  R$ 
// 1000,00 terão aumento de 20%, e os demais terão aumento de 10%.

#include <stdio.h>

float calcula_novo_salario(float salario_atual) {
    float novo_salario = 0;
    if (salario_atual <= 1000.0){
        novo_salario = salario_atual + (1.0/5.0 * salario_atual);
        printf("Paga Nois!! Você recebeu um aumento de 20%% ");
    }
    else {
        novo_salario = salario_atual + (1.0/10.0 * salario_atual);
        printf("O patrao ta fraco. Você recebeu um aumento de 10%% ");
    }
    return novo_salario;
}

float main() {
    float salario_atual, novo_salario;

    printf("Digite o valor do seu salario atual:");
    scanf("%f", &salario_atual);

    novo_salario = calcula_novo_salario(salario_atual);

    printf("e seu novo salario sera de: R$ %.2f\n", novo_salario);

    return 0;
}