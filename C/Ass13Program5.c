#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0;
    int iDiff = 0;
    int iSumEven = 0,iSumOdd =0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
        {
            iSumEven =iSumEven + iDigit;
        }
        else
        {
            iSumOdd =iSumOdd + iDigit;
        }
        iNo = iNo / 10;
    }
    iDiff = iSumEven -iSumOdd;

    return iDiff;
}

int main()
{
    int iValue = 0;
    int iResult = 0;

    printf("Enter the value:");
    scanf("%d",&iValue);

    iResult =CountDiff(iValue);
    printf("The differnce betn summation of even and odd digits in given number is:%d",iResult);

    return 0;
}