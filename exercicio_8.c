// Fazer um algoritmo para calcular a média aritmética entre duas notas de um aluno e apresentar a sua situação (aprovado 
// / reprovado), considerando que o mínimo para a aprovação seja 6.0 pontos. 

#include <stdio.h>
#include "reprovado.h"

void verifica_media(float nota1, float nota2) {
    float media = (nota1 + nota2) / 2;
    if(media >= 6.0){
        printf("Aprovado, pode jogar Pokemon!\n");
    }
    else {
        reprovado();
    }
}

int main() {
    float nota1, nota2, verificacao;
    printf("Digite o valor da primeira nota:");
    scanf("%f", &nota1);
    printf("Digite o valor da segunda nota:");
    scanf("%f", &nota2);

    verifica_media(nota1, nota2);

    return 0;
}

// Para testar este código, lançe no terminal: './exercicio_8'
