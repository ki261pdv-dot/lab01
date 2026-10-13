#include <stdio.h>

int main(void) {
    double C, U, W, q;

    printf("=== Calculation of Charged Capacitor Parameters ===\n");
    
    // Введення ємності та напруги
    printf("Enter capacitance C (F): ");
    if (scanf("%lf", &C) != 1) {
        printf("Error: invalid input for capacitance.\n");
        return 1;
    }

    printf("Enter voltage U (V): ");
    if (scanf("%lf", &U) != 1) {
        printf("Error: invalid input for voltage.\n");
        return 1;
    }

    // Обчислення за формулами варіанта 4
    W = (C * U * U) / 2.0;
    q = C * U;

    // Виведення результатів
    printf("\n--- Results ---\n");
    printf("Energy W = %.6f J\n", W);
    printf("Charge q = %.6f C\n", q);

    return 0;
}