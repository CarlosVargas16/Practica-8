/*Carlos Antonio Vargas Rodriguez
Ejercicio 1*/

#include <stdio.h>

int main() {
    float valor, suma = 0;

    printf("=== Acumulador de valores ===\n");

    while (suma <= 78500) {
        printf("Ingrese un valor: ");
        scanf("%f", &valor);

        suma += valor;

        printf("Suma actual: %.2f\n", suma);
    }

    printf("\nLa suma total supero los 78,500.\n");
    printf("Resultado final: %.2f\n", suma);

    return 0;
}
