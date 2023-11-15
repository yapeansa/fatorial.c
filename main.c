#include <stdio.h>
#include "fatorial.h"

int main()
{
    int n;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);
    printf("O fatorial de %d é igual a %d.\n", n, fatorial(n));
    return 0;
}
