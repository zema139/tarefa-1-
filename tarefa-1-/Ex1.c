#include <stdio.h>
int main() {
    float salarioMinimo, salarioBruto, quantidade;

    printf("Digite o valor do salario minimo: ");
    scanf("%f", &salarioMinimo);

    printf("Digite o valor do salario bruto: ");
    scanf("%f", &salarioBruto);

    quantidade = salarioBruto / salarioMinimo;
#include <stdio.h>
    printf("A pessoa recebe %.2f salarios minimos\n", quantidade);

    return 0;
}
