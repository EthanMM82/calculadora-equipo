#include <stdio.h>

// DECLARACIÓN DE MÓDULOS
float sumar(float num1, float num2);     
float restar(float a, float b);          
float multiplicar(float a, float b);     
float dividir(float a, float b);         

int main() {
    int opcion;
    float num1, num2, resultado;

    do {
        printf("\n--- CALCULADORA---\n");
        printf("1. Sumar\n");
        printf("2. Restar\n");
        printf("3. Multiplicar\n");
        printf("4. Dividir\n");
        printf("5. Salir\n");
        printf("Selecciona una opcion: ");
        scanf("%d", &opcion);

        // Si eligen una operación válida, pedimos los datos desde aquí
        if (opcion >= 1 && opcion <= 4) {
            printf("Ingresa el primer numero: ");
            scanf("%f", &num1);
            printf("Ingresa el segundo numero: ");
            scanf("%f", &num2);
        }

        switch (opcion) {
            case 1:
                resultado = sumar(num1, num2); // Aquí viajan los datos a tu suma.c
                printf("El resultado de la suma es: %.2f\n", resultado);
                break;
            case 2:
                resultado = restar(num1, num2);
                printf("El resultado de la resta es: %.2f\n", resultado);
                break;
            case 3:
                resultado = multiplicar(num1, num2);
                printf("El resultado de la multiplicacion es: %.2f\n", resultado);
                break;
            case 4:
                resultado = dividir(num1, num2);
                if (num2 != 0) {
                    printf("El resultado de la division es: %.2f\n", resultado);
                }
                break;
            case 5:
                printf("Saliendo de la calculadora. ¡Adios!\n");
                break;
            default:
                printf("Opcion no valida. Intenta de nuevo.\n");
        }

    } while (opcion != 5);

    return 0;
}