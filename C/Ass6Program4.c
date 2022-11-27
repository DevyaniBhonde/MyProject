#include<stdio.h>

int NumMultiplication(int iNo1,int iNo2,int iNo3)
{
    int iMulti = 0;
    if(iNo1 == 0 || iNo2 == 0 || iNo3 == 0)
    {
        iMulti = 0;
    }
    else
    {
        iMulti = iNo1 * iNo2 * iNo3;
    }
    
    return iMulti;
}
int main()
{
    int iValue1 = 0,iValue2 = 0,iValue3 = 0;
    int iResult = 0;

    printf("Enter any three numbers :");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);

    iResult  = NumMultiplication(iValue1,iValue2,iValue3);
    printf("Total multiplication of given number is :%d",iResult);

    return 0;
}