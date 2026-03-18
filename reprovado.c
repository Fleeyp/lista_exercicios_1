#include <stdio.h>
#include <unistd.h>
#include "reprovado.h"

void delay_print(char *str, int delay) {
    while (*str) {
        putchar(*str++);
        fflush(stdout);
        usleep(delay);
    }
}

int reprovado() {
    char *text = "\n\n          YOU DIED!          \n\n";

    printf("\033[1;31m"); 
    delay_print(text, 150000);
    printf("\033[0m");

    return 0;
}

// A lógica desse arquivo eu criei com IA, só fiz essa palhaçada pra brincar com os imports.