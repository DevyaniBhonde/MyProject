#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch = 'a';

    for (i = 1; i <= iRow; i++)
    {
        
        if (i % 2 != 0)
        {
            ch = 'a';
            for (j = 1; j <= iCol; j++)
            {
                printf("%c\t", ch);
                ch++;
            }
        }
        else
        {
            for (j = 1; j <= iCol; j++)
            {
                printf("%d\t", j);
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