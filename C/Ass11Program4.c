#include<stdio.h>

int RangeSumEven(int iStart,int iEnd)
{
    int iCnt = 0;
    int iSum = 0;
    for(iCnt = iStart;iCnt <= iEnd;iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iSum = iSum +iCnt;
        }
    }
   return iSum;
}

int main()
{
    int iValue1 = 0,iValue2 = 0;
    int iResult = 0;
    printf("Enter any two numbers :");
    scanf("%d %d",&iValue1,&iValue2);

    iResult = RangeSumEven(iValue1,iValue2);
    printf("Sum is :%d",iResult);

    return 0;
}