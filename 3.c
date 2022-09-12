#include <stdio.h>

int main()
{
    int x;

    printf("Enter day number ");
    scanf("%d", &x);

    switch (x)
    {
    case 1:
        printf("Hello Monday");
        break;

    case 2:
        printf("Hello Tuesday");
        break;

    case 3:
        printf("Hello Wednesday");
        break;

    case 4:
        printf("Hello Thursday");
        break;

    case 5:
        printf("Hello friday");
        break;

    case 6:
        printf("Hello Saturday");
        break;

    case 7:
        printf("Hello Sunday");
        break;
    }
    return 0;
}