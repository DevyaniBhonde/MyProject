#include<stdio.h>

int MultiEvenFactorial(int iNo)
{
    int iCnt = 0;
    int iRet = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iRet = iRet * iCnt;
        }
    }
    return iRet;
}
int main()
{
    int iValue = 0;
    int iResult = 0;
    printf("Enter the value:");
    scanf("%d",&iValue);

    iResult = MultiEvenFactorial(iValue);
    printf("Multiplication of even factor of %d is %d",iValue,iResult);
    return 0;
}