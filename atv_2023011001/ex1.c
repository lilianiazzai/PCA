#include <stdio.h>
int main()
{

    int n1, n2, n3, restod;
    int c = 0;
    printf("Insira um numero: ");
    scanf("%d", &n1);
    printf("Insira um numero entre 0 e 9: ");
    scanf("%d", &n2);

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

    printf("O numero %d se repete %d vezes em %d;", n2, c, n3);

    return 0;
}
