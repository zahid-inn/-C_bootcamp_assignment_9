#include <stdio.h>

int main()
{
    int n, x;

    printf("Enter even number ");
    scanf("%d", &n);

    x = n % 2 == 0;
    switch (x)
    {
    case 1:
        printf("%d", n += 1);
        break;
    }
    return 0;
}