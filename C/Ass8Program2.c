#include <stdio.h>
int Factorial(int iNo)
{
    int iFact = 1;
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = iNo; iCnt >= 1; iCnt--)
    {
        if (iNo == 0)
        {
            iFact = 1;
            break;
        }
        iFact = iFact * iCnt;
    }
    return iFact;
}
int main()
{
    int iValue = 0;
    int iResult = 0;

    printf("Enter the value :");
    scanf("%d", &iValue);

    iResult = Factorial(iValue);
    printf("Factorial of %d is %d", iValue, iResult);

    return 0;
}