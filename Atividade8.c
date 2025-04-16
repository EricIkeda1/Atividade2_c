#include <stdio.h>

int main() {
    float salario, reajuste, novoSalario;

    printf("Digite o salario atual do funcionario: R$ ");
    scanf("%f", &salario);

    if (salario <= 400.00) {
        reajuste = salario * 0.15;
    } else if (salario <= 800.00) {
        reajuste = salario * 0.12;
    } else if (salario <= 1200.00) {
        reajuste = salario * 0.10;
    } else if (salario <= 2000.00) {
        reajuste = salario * 0.07;
    } else {
        reajuste = salario * 0.04;
    }

    novoSalario = salario + reajuste;

    printf("Salario Atual: R$ %.0f\n", salario);
    printf("Reajuste: R$ %.0f\n", reajuste);
    printf("Novo Salario: R$ %.0f\n", novoSalario);

    return 0;
}
