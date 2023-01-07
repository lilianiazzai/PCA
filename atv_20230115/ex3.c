#include <stdio.h>

int num = 0, div = 0;

void ler() {
    printf("Digite um numero par: ");
    scanf("%d", &num);

    while (num % 2 != 0) {
        printf("O numero deve ser par!\n");
        printf("Digite outro numero: ");
        scanf("%d", &num);
    }
}

int classificar() {
    for (int c = 1; c < num; c++) {
        if (num % c == 0) {
            div += c;
        }
    }

    if (div == num) {
        printf("O numero %d e perfeito", num);
    } else {
        printf("O numero %d nao e perfeito", num);
    }

    return div;
}

int main(int argc, char const *argv[])
{
    ler();
    classificar();
    return 0;
}
