#include <stdio.h>
int main() {

    float Horas, Minutos;

    printf("Digite o numero de horas: ");
    scanf("%f", &Horas);

    Minutos = Horas * 60;
    printf("horas em minutos %.2f\n", Minutos);
}