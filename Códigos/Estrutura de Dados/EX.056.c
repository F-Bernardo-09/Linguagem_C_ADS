// Escreva uma função recursiva em C que calcule a soma do fatorial de dois números inteiro positivo n e m. Ex.: 2! +4! = 26. 

#include <stdio.h>

int fatorial(int n) {
    if (n <= 1) return 1;
    return n * fatorial(n - 1);
}

int soma_Fatoriais(int n, int m) {
    return fatorial(n) + fatorial(m);
}

int main() {
    int n, m;
    printf ("Digite os dois numeros que devem ser feito o fatorial e seja somado:");
    scanf ("%d%d", &n, &m);
    int resultado = soma_Fatoriais(n, m); 
    printf("Resultado: %d\n", resultado);
    return 0;
}
