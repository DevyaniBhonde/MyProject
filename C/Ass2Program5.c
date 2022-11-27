#include <stdio.h>
#include <stdbool.h>

#define TRUE 1
#define FALSE 0

int CheckEvenOdd(int iNo)
{
    if(iNo % 2 == 0)
    {
        return TRUE;
    }
    else{
        return FALSE;
    }
}
int main()
{
    int iValue = 0;
    bool bResult = FALSE;

    printf("Enter number :");
    scanf("%d",&iValue);
    bResult = CheckEvenOdd(iValue);
    if(bResult == TRUE)
    {
        printf("%d is even number",iValue);
    }
    else{
        printf("%d is odd number",iValue);
    }

    return 0;
}