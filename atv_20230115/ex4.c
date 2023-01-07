#include <stdio.h>

int fat(n) {
    int nf = 1;

    if (n != 0) {
        for (int c = 1; c <= n; c++) {
        nf *= c;
        }
        printf("%d! = %d", n, nf);
    } else {
        printf("0! = 0");
    }
    return nf;

}

int main(int argc, char const *argv[])
{
    int n;
    printf("Digite um numero positivo: ");
    scanf("%d", &n);
    while (n < 0) {
        printf("Nao existe fatorial de numero negativo! \nDigite um numero positivo: ");
        scanf("%d", &n);
    }

    fat(n);

    return 0;
}
