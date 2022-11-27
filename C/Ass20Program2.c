#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char cValue1 = 'A';
    char cValue2 = 'a';
    for (i = 1; i <= iRow; i++)
    {
        cValue1 = 'A';
        cValue2 = 'a';
        if (i % 2 != 0)
        {
            for (j = 1; j <= iCol; j++)
            {
                printf("%c\t", cValue1);
                cValue1++;
            }
        }
        else
        {
            for (j = 1; j <= iCol; j++)
            {
                printf("%c\t", cValue2);
                cValue2++;
            }
        }

        printf("\n");
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of elements:");
    scanf("%d %d", &iValue1, &iValue2);
    Pattern(iValue1, iValue2);

    return 0;
}