#include "stdio.h"

int main() {
    int idade = 20;
    float altura = 1.75;
    char genero = 'M';
    char nome[] = "Joao";

    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n", altura);
    printf("Genero: %c\n", genero);

    return 0;
}