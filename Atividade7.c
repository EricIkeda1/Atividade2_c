#include <stdio.h>

int main() {
    int codigo, quantidade;
    float total;

    printf("Digite o codigo e a quantidade: ");
    scanf("%d %d", &codigo, &quantidade);

    if (codigo == 100) {
        total = quantidade * 7.5;
        printf("Produto: Cachorro quente\n");
    } else if (codigo == 101) {
        total = quantidade * 5.5;
        printf("Produto: Bauru simples\n");
    } else if (codigo == 102) {
        total = quantidade * 10.5;
        printf("Produto: X-Burguer\n");
    } else if (codigo == 103) {
        total = quantidade * 11.0;
        printf("Produto: X-Salada\n");
    } else if (codigo == 104) {
        total = quantidade * 13.5;
        printf("Produto: X-Bacon\n");
    } else if (codigo == 105 || codigo == 106) {
        total = quantidade * 3.5;
        printf("Produto: Refrigerante\n");
    } else {
        printf("Produto nao encontrado\n");
        return 0;
    }

    printf("Total: R$ %.2f\n", total);

    return 0;
}
