#include <stdio.h>

int fib(int n) {
    int f1 = 1, f2 = 1; 
    int fn;

    if (n == 1) {
        printf("Na sequencia de Fibonacci, f1 = 1");
    } else if (n == 2) {
        printf("Na sequencia de Fibonacci, f2 = 1");
    } else {
        for (int c = 2; c < n; c++) {
        fn = f1 + f2;
        f1 = f2;
        f2 = fn;
        }
        printf("Na sequencia de Fibonacci, f%d = %d", n, fn);
    }

    return fn;

}

int main(int argc, char const *argv[])
{
    int n;
    printf("Digite a posicao do numero: ");
    scanf("%d", &n);
    while (n <= 0) {
        printf("A posicao inicial e 1\n");
        printf("Digite a posicao do numero: ");
        scanf("%d", &n);
    }

    fib(n);

    return 0;
}
