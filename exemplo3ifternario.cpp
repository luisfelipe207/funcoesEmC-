#include <stdio.h>

//Declaração de função
bool ehPar(int num) {
    return num % 2 == 0;
}

int main() {
    int numero = 6;
    // Chamada da função e impressão do resultado
    printf("%d é %s\n", numero, ehPar(numero) ? "par" : "ímpar");
    return 0;
}