#include <stdio.h>

int Addition(int iNo1,int iNo2)
{
    int iAns=0;
    iAns=iNo1+iNo2;
    return iAns;
}


int main()
{
    int iValue1=0;
    int iValue2=0;
    int iRet=0;
    
    printf("Enter first number:");
    scanf("%d",&iValue1);

    printf("Enter second number:");
    scanf("%d",&iValue2);
    printf("The answer is:");
    iRet=Addition(iValue1,iValue2);
    printf("%d",iRet);

    return 0;

}