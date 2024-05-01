#include <stdio.h>

// Declaração da função
double celsiusParaFahrenheint(double celsius) {
    return (celsius * 9 / 5) + 32;
}

int main() {
    double temperaturaCelsius = 20.0;
    // Chamada da função e impressão do resultado
    printf("%.2f graus Celsius é equivalente a %.2f graus Fahrenheit\n", temperaturaCelsius, celsiusParaFahrenheint(temperaturaCelsius));
    return 0;
}