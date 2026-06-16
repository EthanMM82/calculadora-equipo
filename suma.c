#include <stdio.h>

int main(){
    int menu;
    float num1, num2, resultado;
    printf ("Ingrese un número.\n");
    scanf (" %f", &num1);
    printf ("Ingrese otro número.\n");
    scanf (" %f", &num2);
    
    printf ("Calculadora en Switch.\n");
    printf ("1. Suma\n");
    printf ("2. Resta\n");
    printf ("3. Multiplicación\n");
    printf ("4. Division\n");
    scanf("%d", &menu);
    
    switch (menu){
        case 1:
            //Ethan
            resultado = (float) num1 + num2;
        break;
        case 2:
            //Rodrigo
            resultado = (float) num1 - num2;
        break;
        case 3:
            //Martin
            resultado = (float) num1 * num2;
        break;
        case 4:
            //Juan José
            resultado = (float) num1 / num2;
        break;
        default:
            printf ("Opción Errónea");
        break;

    }
     printf("El resultado es: %.2f", resultado); 
    return 0;
}