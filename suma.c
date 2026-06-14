#include <stdio.h>

int main() {
    float num1, num2, resultado;

    printf("--- Calculadora de Suma ---\n");
    printf("Ingresa el primer numero: ");
    scanf("%f", &num1);
    printf("Ingresa el segundo numero: ");
    scanf("%f", &num2);

    resultado = num1 + num2;

    printf("El resultado de la suma es: %.2f\n", resultado);

    return 0;
}