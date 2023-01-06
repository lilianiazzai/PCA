#include <stdio.h>

float decimais[] = {0, 0, 0};

/*
 decimais[0] = peso do feto
decimais [1] = semanas de gestacao
decimais[2] = condicao para parar o codigo
*/ 

void lerps() {
    printf("Digite o peso do feto em gramas: ");
    scanf("%f", &decimais[0]);

    printf("Digite a quantidade de semanas em gestacao: ");
    scanf("%f", &decimais[1]);
}

void condicional() {
    for (int c = 0; c < 1; c++) {
        if (decimais[0] < 100 || decimais[1] < 28) {
            printf("Parto nao devera ser realizado, reavaliar clinicamente\n");
            decimais[2] = 1;
            c++;
            break;
        }

        if (decimais[0] > 2500 && (decimais[1] / 4) > 7) {
            printf("Tipo de parto: Normal\n");
            c++;
            continue;
        } else if (decimais[0] > 2500 && (decimais[1] / 4) <= 7) {
            printf("Tipo de parto: Cesariana\n");
            c++;
            continue;
        } else if (decimais[0] < 2000 && decimais[0] > 1500 && (decimais[1] / 4) > 9) {
            printf("Tipo de parto: Normal\n");
            c++;
            continue;
        } else {
            printf("Tipo de Parto: Cesariana\n");
            c++;
            continue;
        }
    }
}

int main(int argc, char const *argv[])
{
    lerps();
    printf("--------------------------------------------------\n");
    condicional();

    for (int c = 0; c < 1; c++) {
        if (decimais[2] == 1) {
            break;
        } else {
            printf("Peso do feto: %.2f\n", decimais[0]);
            printf("Semanas gestacionais: %.1f\n", decimais[1]);
            printf("--------------------------------------------------\n");
        }
        c++;
    }
    
    return 0;
}
