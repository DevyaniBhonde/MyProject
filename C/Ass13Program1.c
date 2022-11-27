#include<stdio.h>

int CountEven(int iNo)
{
    int iDigit = 0;
    int iCount = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
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

    printf("Enter the value:");
    scanf("%d",&iValue);

    iResult =CountEven(iValue);
    printf("The count of even digits in given number is:%d",iResult);

    return 0;
}