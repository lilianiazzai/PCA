#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    int div = 0, res = 0;

    printf("Digite um numero: ");
    scanf("%i", &num);

    while (div < num - 1) {
        div++;
        if (num % div == 0) {
            res += div;
        }
    }

    if (num == res) {
        printf("Esse e um numero perfeito");
    } else {
        printf("Esse nao e um numero perfeito");
    }
    
    return 0;
}
