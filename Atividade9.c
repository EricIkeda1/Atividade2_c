#include <stdio.h>
#include <math.h>

int main() {
    float A, B, C;
    float delta, x1, x2;

    printf("Digite o valor de A: ");
    scanf("%f", &A);
    printf("Digite o valor de B: ");
    scanf("%f", &B);
    printf("Digite o valor de C: ");
    scanf("%f", &C);

    delta = B * B - 4 * A * C;
    printf("\nDelta: %f\n", delta);

    if (delta > 0) {
        x1 = (-B + sqrt(delta)) / (2 * A);
        x2 = (-B - sqrt(delta)) / (2 * A);
        printf("A equacao possui duas raizes reais: x1 = %f e x2 = %f\n", x1, x2);
    } else if (delta == 0) {
        x1 = -B / (2 * A);
        printf("A equacao possui uma unica raiz real: x = %f\n", x1);
    } else {
        printf("Essa equacao nao possui raizes reais.\n");
    }

    return 0;
}
