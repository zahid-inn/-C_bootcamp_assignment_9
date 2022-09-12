#include <stdio.h>

int main()
{
    int n;
    float sum;

    printf("Enter units ");
    scanf("%d", &n);

    switch (n)
    {
    case 0 ... 50:
        sum = n * 0.50;
        break;

    case 51 ... 150:
        sum = n * 0.75;
        break;

    case 151 ... 250:
        sum = n * 1.20;
        break;

    default:
        sum = n * 1.50;
        break;
    }

    printf("Your total bill is Rs.%f", sum += n * 20 / 100);
    return 0;
}