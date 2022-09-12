#include <stdio.h>

int main()
{
    int n, x;

    printf("Enter a number ");
    scanf("%d", &n);

    x = n > 0;

    switch (x)
    {
        case 0:
            n = n - n - n;
            break;

        case 1:
            n = n - n - n;
            break;

        // default:
        //         n = n - n - n;  // if u want to run this than comment case 0, 1 && x expression (after scanf) and type n in switch statement.
    }

    printf("%d", n);
    return 0;
}