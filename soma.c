#include <stdio.h>

int soma(int a, int b) {
    return a + b;
}

int main() {
    int x = 5;
    int y = 25;
    printf("A soma de %d e %d é %d\n", x, y, soma(x, y));
    return 0;
}