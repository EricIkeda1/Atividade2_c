//6) Elabore um programa que recebe a idade de um nadador. O programa deve classificar
//o nadador em uma das categorias abaixo:
//a) Infantil A= de 5 a 7 anos
//b) Infantil B= de 8 a 10 anos
//c) Juvenil A= de 11 a 13 anos
//d) Juvenil B= de 14 a 17 anos
//e) Senior = maiores de 18 anos
#include <stdio.h>

int main() {
    int idade;

    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);

    if (idade >= 5 && idade <= 7) {
        printf("Categoria: Infantil A\n");
    } else if (idade >= 8 && idade <= 10) {
        printf("Categoria: Infantil B\n");
    } else if (idade >= 11 && idade <= 13) {
        printf("Categoria: Juvenil A\n");
    } else if (idade >= 14 && idade <= 17) {
        printf("Categoria: Juvenil B\n");
    } else if (idade >= 18) {
        printf("Categoria: Senior\n");
    } else {
        printf("Idade fora das faixas classificadas\n");
    }

    return 0;
}
