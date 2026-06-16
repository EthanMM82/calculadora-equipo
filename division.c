#include <stdio.h>

float dividir(float a, float b) {
    if (b == 0) {
        printf("\n[ERROR] No se puede dividir entre cero.\n");
        return 0; // Retorna 0 para evitar que el programa falle
    }
    return a / b;
}