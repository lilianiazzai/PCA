#include <stdio.h>

int main(int argc, char const *argv[])
{
    int big, sma;
    int count = 0, n1 = 0;

    while (count < 20) {
        printf("Enter a number: ");
        scanf("%i", &n1);
        count++;
        if (n1 < 0) {
            count--;
            printf("Negative numbers are not considered! Try again...\n");
        }
        if (count == 1 && n1 >= 0) {
            big = n1;
        } else if (n1 > big && n1 >= 0) {
            big = n1;
        }
        if (count == 1 && n1 >= 0) {
            sma = n1;
        } else if (n1 < sma && n1 >= 0) {
            sma = n1;
        }

    }

    printf("The greatest number is %i;\n", big);
    printf("The smallest number is %i;\n", sma);

    return 0;
}
