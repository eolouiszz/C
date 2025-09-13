#include <stdio.h>

void verificar(int idade, int limite) {
    if (idade >= limite) {
        printf("Acesso permitido\n");
    } else {
        printf("Acesso negado\n");
    }
}

int main() {
    int idade = 20;
    int limite = 18;
    verificar(idade, limite);
    return 0;
}
