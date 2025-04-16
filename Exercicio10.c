#include <stdio.h>

int main() {
    int resposta;

    printf("O animal e mamifero? (1-sim / 0-nao): ");
    scanf("%d", &resposta);

    if (resposta == 1) {
        printf("E quadrupede? ");
        scanf("%d", &resposta);
        if (resposta == 1) {
            printf("E carnivoro? ");
            scanf("%d", &resposta);
            if (resposta == 1) {
                printf("Animal escolhido: Leao\n");
            } else {
                printf("Animal escolhido: Cavalo\n");
            }
        } else {
            printf("E bipede? ");
            scanf("%d", &resposta);
            if (resposta == 1) {
                printf("E onivoro? ");
                scanf("%d", &resposta);
                if (resposta == 1) {
                    printf("Animal escolhido: Homem\n");
                } else {
                    printf("Animal escolhido: Macaco\n");
                }
            } else {
                printf("E voador? ");
                scanf("%d", &resposta);
                if (resposta == 1) {
                    printf("Animal escolhido: Morcego\n");
                } else {
                    printf("Animal escolhido: Baleia\n");
                }
            }
        }
    } else {
        printf("O animal e ave? ");
        scanf("%d", &resposta);
        if (resposta == 1) {
            printf("E nao-voadora? ");
            scanf("%d", &resposta);
            if (resposta == 1) {
                printf("E tropical? ");
                scanf("%d", &resposta);
                if (resposta == 1) {
                    printf("Animal escolhido: Avestruz\n");
                } else {
                    printf("Animal escolhido: Pinguim\n");
                }
            } else {
                printf("E nadadora? ");
                scanf("%d", &resposta);
                if (resposta == 1) {
                    printf("Animal escolhido: Pato\n");
                } else {
                    printf("Animal escolhido: Aguia\n");
                }
            }
        } else {
            printf("O animal e reptil? ");
            scanf("%d", &resposta);
            if (resposta == 1) {
                printf("Tem casco? ");
                scanf("%d", &resposta);
                if (resposta == 1) {
                    printf("Animal escolhido: Tartaruga\n");
                } else {
                    printf("E carnivoro? ");
                    scanf("%d", &resposta);
                    if (resposta == 1) {
                        printf("Animal escolhido: Crocodilo\n");
                    } else {
                        printf("Animal escolhido: Cobra\n");
                    }
                }
            } else {
                printf("Animal desconhecido ou fora da lista.\n");
            }
        }
    }

    return 0;
}
