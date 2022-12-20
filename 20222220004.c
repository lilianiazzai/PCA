#include <stdio.h>

int main(int argc, char const *argv[])
{
    int big, sma;
    int count = 0, n1 = 0;

    while (count < 20) {
        printf("Enter a number: ");
        scanf("%i", &n1);
        count++;
        if (count == 1) {
            big = n1;
        } else if (n1 > big) {
            big = n1;
        }
        if (count == 1) {
            sma = n1;
        } else if (n1 < sma) {
            sma = n1;
        }

    }

    printf("The greatest number is %i;\n", big);
    printf("The smallest number is %i;\n", sma);

    return 0;
}
