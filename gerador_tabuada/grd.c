#include <stdio.h>

// Função para imprimir a tabuada de um número
void tabuada(int n) {
    printf("Tabuada do %d:\n", n);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
    printf("\n");
}

int main() {
    int numero, escolha;

    do {
        printf("Digite um número para ver a tabuada: ");
        scanf("%d", &numero);

        tabuada(numero);

        printf("Quer ver outra tabuada? (1 - Sim / 0 - Nao): ");
        scanf("%d", &escolha);
    } while (escolha == 1);

    printf("Programa encerrado.\n");
    return 0;
}