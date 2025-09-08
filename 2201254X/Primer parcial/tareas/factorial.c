#include <stdio.h>

// Función para calcular el factorial de un número
long long factorial(int num) {
    long long fact = 1;
    for(int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n;

    printf("Introduce un número: ");
    scanf("%d", &n);

    printf("\nTabla de factoriales de 1 hasta %d:\n", n);
    for(int i = 1; i <= n; i++) {
        printf("%d! = %lld\n", i, factorial(i));
    }

    return 0;
}

