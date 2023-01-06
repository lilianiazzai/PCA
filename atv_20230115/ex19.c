#include <stdio.h>

int num[] = {0, 0, 0, 0};

void scanIntIntervalo() {

    printf("Digite um numero entre 0 e 1000: ");
    scanf("%d", &num[0]);
    while (num[0] <= 0 || num[0] >= 1000) {
        printf("O NUMERO DEVE ESTAR ENTRE 0 E 1000!\n");
        printf("Digite novamente: ");
        scanf("%d", &num[0]);
    }

    printf("Digite um numero entre 0 e 1000: ");
    scanf("%d", &num[1]);
    while (num[1] <= 0 || num[1] >= 1000) {
        printf("O NUMERO DEVE ESTAR ENTRE 0 E 1000!\n");
        printf("Digite novamente: ");
        scanf("%d", &num[1]);
    }

}

void percentual() {
    if (num [0] > num[1]) {
        num[2] = ((num[1] * 100) / num[0]);
        printf("O numero %d equivale a %d porcento de %d\n", num[1], num[2], num[0]);
    } else if (num[0] == num[1]) {
        printf("Os numeros tem o mesmo valor;\n");
    } else {
        num[2] = ((num[0] * 100) / num[1]);
        printf("O numero %d equivale a %d porcento de %d\n", num[0], num[2], num[1]);
    }


}

void absdif() {
    if (num[0] > num [1]) {
        num[3] = num[0] - num[1];
        printf("Diferenca = %d\n", num[3]);
    } else if (num[0] == num[1]) {
        printf("Diferenca = 0\n");
    } else {
        num[3] = num[1] - num[0];
        printf("Diferenca = %d\n", num[3]);
    }
}

int main(int argc, char const *argv[])
{
    printf("--------------------------------------------------\n");
    scanIntIntervalo();
    printf("--------------------------------------------------\n");
    printf("Numeros inseridos: %d e %d\n", num[0], num[1]);
    percentual();
    absdif();
    printf("--------------------------------------------------\n");
    return 0;
}
