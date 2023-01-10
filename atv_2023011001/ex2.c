#include <stdio.h>

/*Se o numero entre 0 e 9 se repetir na mesma quantidade
em ambos os numeros, eles sao uma permuta entre si*/

int cont(int n1, int n2, int n3) {

    int c = 0;
    int restod;

    while (n2 >= 9 || n2 <= 0)
    {
        printf("INVALIDO\n");
        printf("Insira um numero entre 0 e 9: ");
        scanf("%d", &n2);
    }

    n3 = n1;

    while (n1 > 0)
    {
        restod = n1 % 10;
        n1 = n1 / 10;
        if (restod == n2)
        {
            c++;
        }
    }

    return c;
}

int permut(int n1, int n4, int n2, int c) {
    int n5, restod;
    int i = 0;
    n5 = n4;

    while (n4 > 0) {
        restod = n4 % 10;
        n4 = n4 / 10;
        if (restod == n2) {
            i++;
        }
    }

    if (i == c) {
        printf("O numero %d e uma permuta de %d;", n5, n1);
    } else {
        printf("O numero %d NAO e uma permuta de %d;", n5, n1);
    }
    return i;
}

int main()
{
    int n1, n2, n3, n4, c;
    
    printf("Insira um numero: ");
    scanf("%d", &n1);
    printf("Insira um numero entre 0 e 9: ");
    scanf("%d", &n2);
    
    c = cont(n1, n2, n3);

    printf("Insira outro numero: ");
    scanf("%d", &n4);

    permut(n1, n4, n2, c);

    return 0;
}