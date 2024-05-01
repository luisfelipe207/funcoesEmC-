#include <stdio.h>

// Declaração de função
int calcularAreaQuadrado(int lado) {
    return lado * lado;
}

int main() {
    int lado = 5;
    // Chamada da função
    int area = calcularAreaQuadrado(lado);

    printf("A área do quadrado é: %d\n", area);
    return 0;

    lado = 150;
    // Chamada da função
    area = calcularAreaQuadrado(lado);

    printf("A área do quadrado é: %d\n", area);
    return 0;

}

   