#include <stdio.h>

int main() {

    float den = 1, num = 1;
    int cont = 0; 
    float res;
    float soma = 0;

    while (cont < 49) {
        res = num/den;
        printf("%.2f + ", res);
        soma +=res;
        den++;
        num += 2;
        cont++;
    }

    printf("= %.2f", soma);
    
    return 0;
}
