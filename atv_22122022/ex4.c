#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, pr;
    while (num != 0)
    {
        printf("Type 0 to finish\n");
        printf("Enter a number: ");
        scanf("%i", &num);

        if (num != 0 && num != 2 && num % 2 != 0)
        {
            pr = num;
            printf("This is a prime number!\n");
        }
        else if (num == 2)
        {
            pr = num;
            printf("This is a prime number!\n");
        }
        
    }

    return 0;
}
