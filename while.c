#include <stdio.h>

int main() {
    int number = 10; // declara e inicializa
    while (number > 1) { // apenas a condição
        printf("number: %d\n", number);
        number--; // importante para não criar loop infinito
    }

    return 0;
}
