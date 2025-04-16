//1) Fazer um algoritmo que leia um número. Se o numero for maior do que 50, imprimir a metade
//deste numero. Senão, imprimir o dobro.
#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero > 50) {
        printf("A metade e: %d\n", numero / 2);
    } else {
        printf("O dobro e: %d\n", numero * 2);
    }

    return 0;
}
