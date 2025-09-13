#include "stdio.h"

int main() {
    int idade = 14;
    float altura = 1.71;
    char genero = 'M';
    char nome[] = "Louis";

    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n", altura);
    printf("Genero: %c\n", genero);

    return 0;
};