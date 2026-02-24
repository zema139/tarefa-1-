#include <stdio.h>

int main() {
    float sm;   
    float vd;   
    float vr;   
    float cc;   
    int qc;     

    printf("Digite o salario minimo: ");
    scanf("%f", &sm);

    printf("Digite o valor do dolar: ");
    scanf("%f", &vd);

    vr = 10000000 * vd;
    cc = 150 * sm;   
    qc = vr / cc;        

    printf("\nValor total em reais: %.2f\n", vr);
    printf("Custo de cada casa: %.2f\n", cc);
    printf("Quantidade de casas: %d\n", qc);

    return 0;
}