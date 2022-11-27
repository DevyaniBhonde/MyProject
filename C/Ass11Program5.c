#include<stdio.h>

void RangeDisplayRev(int iStart,int iEnd)
{
    int iCnt = 0;
    
    for(iCnt = iEnd;iCnt >= iStart;iCnt--)
    {
        printf("%d ",iCnt);
    }
   
}

int main()
{
    int iValue1 = 0,iValue2 = 0;
    
    printf("Enter any two numbers :");
    scanf("%d %d",&iValue1,&iValue2);

    RangeDisplayRev(iValue1,iValue2);
    

    return 0;
}