// 4) Construir um algoritmo que leia 2 notas de um aluno e o percentual de frequencia do aluno
// (valor 0 a 100). Em seguida calcular a media e determinar se o aluno foi aprovado ou reprovado.
// Para ser aprovado o aluno tem que cumprir dois requisitos: deve ter media acima de 7,0 e a
// frequencia acima de 75%.
#include <stdio.h>

int main() {
    float nota1, nota2, media, frequencia;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite o percentual de frequencia: ");
    scanf("%f", &frequencia);

    media = (nota1 + nota2) / 2;

    if (media >= 7.0 && frequencia >= 75) {
        printf("Aluno APROVADO!\n");
    } else {
        printf("Aluno REPROVADO!\n");
    }

    return 0;
}
