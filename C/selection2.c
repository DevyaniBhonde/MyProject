#include <stdio.h>

int main()
{
    int iToken = 0;
    printf("Enter your token number");
    scanf("%d", &iToken);

    switch (iToken)
    {
    case 11:
        printf("Mulachi chappal milali");
        break;
    case 21:
        printf("Mulichi chappal milali");
        break;
    case 51:
        printf("Aaichi chappal milali");
        break;
    case 55:
        printf("Babachi chappal milali");
        break;
    default:
        printf("Sorry asa token nahiye");
        break;
    }
    return 0;
}