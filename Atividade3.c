// 3) Joao e Maria vao tirar ‘par ou impar’. Fazer um algoritmo que leia dois valores inteiros,
// representando a quantidade de dedos que Joao e Maria colocaram. Em seguida, o programa deve
// imprimir na tela se o resultado foi ‘par’ (caso a soma dos dedos for um valor par) ou ‘impar’
// (caso a soma dos dedos for um valor impar), seguindo as regras do jogo.
#include <stdio.h>

int main() {
    int joao, maria, soma;

    printf("Digite a quantidade de dedos de Joao: ");
    scanf("%d", &joao);
    printf("Digite a quantidade de dedos de Maria: ");
    scanf("%d", &maria);

    soma = joao + maria;

    if (soma % 2 == 0) {
        printf("O resultado foi PAR.\n");
    } else {
        printf("O resultado foi IMPAR.\n");
    }

    return 0;
}
