#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num = 0, count = 0, add = 0;

    while (count < 50) {
        printf("Enter a number: ");
        scanf("%i", &num);
        count++;
        if (num % 2 != 0) {
            add += num;
        }
    }

    printf("The addittion of odd numbers: %i", add);

    return 0;
}
