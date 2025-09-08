#include <stdio.h>

int main() {
    int n;
    int suma_parcial, suma_total = 0;

    printf("Introduce un número: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        suma_parcial = 0;
        for(int j = 1; j <= i; j++) {
            suma_parcial = suma_parcial + j;  // acumulamos
        }
        printf("Sumatoria hasta %d = %d\n", i, suma_parcial);
        suma_total = suma_total + suma_parcial; // acumulamos en el total
    }

    printf("La serie total es: %d\n", suma_total);

    return 0;
}

