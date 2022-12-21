#include <stdio.h>

// Não entendi o que o exercicio quis dizer com maior e menor media

int main(int argc, char const *argv[])
{
    float gr = 0, add = 0, mn = 0, men= 0;
    int count = 1;

    while (count < 4) {
        printf("Digite sua nota %i: ", count);
        scanf("%f", &gr);
        count++;
        add += gr;
        if (count == 2) {
            mn = men = gr;
        } else if (gr > mn) {
            mn = gr;
        } else if (gr < men) {
            men = gr;
        }
    }
    printf("Maior nota: %.2f\n", mn);
    printf("Menor nota: %.2f\n", men);
    printf("Media Final: %.2f", add/3);
    return 0;
}
