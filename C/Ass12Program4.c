#include <stdio.h>

int CountFour(int iNo)
{
    int iDigit = 0;
    int iCount = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 4)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }
    return iCount;
}

int main()
{
    int iValue = 0;
    int iResult = 0;
    printf("Enter the value :");
    scanf("%d",&iValue);
    iResult = CountFour(iValue);
    printf("Number of 2s in given digit is :%d",iResult);

    return 0;
}