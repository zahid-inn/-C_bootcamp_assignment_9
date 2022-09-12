#include <stdio.h>

int main()
{
    int a, b, c = 0;
    char x;

    while (1)
    {
        printf("Choose options from below\n a. Addition\n b. Subtraction\n c. Multiplication\n d. Division\n e. Exit\n");
        scanf("%c", &x);

        switch (x)
        {
        case 'a':
            printf("Enter two number ");
            scanf("%d %d", &a, &b);
            printf("Addition %d \n", a + b);
            break;

        case 'b':
            printf("Enter two number ");
            scanf("%d %d", &a, &b);
            printf("Subtraction %d \n", a - b);
            break;

        case 'c':
            printf("Enter two number ");
            scanf("%d %d", &a, &b);
            printf("Multiplication %d \n", a * b);
            break;

        case 'd':
            printf("Enter two number ");
            scanf("%d %d", &a, &b);
            printf("Division %d \n", a / b);
            break;

        case 'e':
            c = 1;
            break;

        default:
            printf("Error\n");
            break;
        }
        if (c == 1)
            break;
    }

    return 0;
}