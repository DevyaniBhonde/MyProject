#include<stdio.h>

void RangeDisplayEven(int iNo1,int iNo2)
{
    int iCnt = 0;
    if(iNo1 > iNo2)
    {
        printf("Invalid range");
    }
    for(iCnt = iNo1;iCnt <= iNo2;iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            printf("%d ",iCnt);
        }
    }
}
int main()
{
    int iValue1 = 0,iValue2 = 0;
    printf("Enter the value:");
    scanf("%d %d",&iValue1,&iValue2);

    RangeDisplayEven(iValue1,iValue2);

    return 0;
}