#include <stdio.h>

int main()
{
    int year, x;

    printf("Enter year ");
    scanf("%d", &year);

    x = year / 4 == 0 ? 0 : 1; 

    switch (x)
    {
    case 0:
        printf("Leap year");
        break;

    case 1:
        printf("Non leap-year");
        break;
    
    }
    return 0;
}