#include <stdio.h>
int main(int argc, char const *argv[])
{
    float massai, massaf;
    float tempo = 0;

    printf("Digite o peso do material, em gramas: ");
    scanf("%f", &massai);
    massaf = massai + 0;

    while (massaf > 0.5) {
        tempo += 50;
        massaf = massaf/2;
    }

    if (massai > 0.5) {
        printf("Massa inicial: %.2fg\n", massai);
        printf("Massa Final: %.2fg\n", massaf);
        printf("O tempo levado para que a massa fosse menor que 0.5g foi:\n");
        printf("%.2f segundos = %.2f minutos = %.3f horas", tempo, tempo/60, tempo/3600);
    } else {
        printf("A massa ja e menor que 0.5 gramas");
    }
    return 0;
}
