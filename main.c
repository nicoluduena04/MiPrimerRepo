#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Inicializo  para números aleatorios
    srand(time(0));
    
    // Genero dos números aleatorios entre 0 y 99
    int num1 = rand() % 100;
    int num2 = rand() % 100;
    
    // Muestro por pantalla los números generados
    printf("Numero 1: %d\n", num1);
    printf("Numero 2: %d\n", num2);

    // Operaciones de suma y resta
    int suma = num1 + num2;
    int resta = num1 - num2;

    // // Muestro por pantalla los RESULTADOS
    printf("Suma: %d + %d = %d\n", num1, num2, suma);
    printf("Resta: %d - %d = %d\n", num1, num2, resta);

    return 0;
}
