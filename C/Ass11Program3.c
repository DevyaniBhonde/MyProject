#include<stdio.h>

int RangeSum(int iNo1,int iNo2)
{
    int iCnt = 0;
    int iSum = 0;
    if(iNo1 > iNo2)
    {
        printf("Invalid range");
    }
    if(iNo1 > 0 && iNo2 > 0)
    {
            for(iCnt = iNo1;iCnt <= iNo2;iCnt++)
    {
       
            iSum = iSum + iCnt;
    }
    }
    
    return iSum;
}
int main()
{
    int iValue1 = 0,iValue2 = 0;
    int iResult = 0;
    printf("Enter the value:");
    scanf("%d %d",&iValue1,&iValue2);

    iResult = RangeSum(iValue1,iValue2);
    printf("Sum of even number betn the above range is:%d",iResult);

    return 0;
}