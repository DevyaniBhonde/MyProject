#include<stdio.h>

void Pattern(int iNo)
{
    char cRet = 'A';
    int iCnt =0;
    for(iCnt = 0;iCnt < iNo;iCnt++)
    {
        printf("%c ",cRet);
        cRet++;
    }
}
int main()
{
    int iValue = 0;
    
    printf("Enter number of elements:");
    scanf("%d",&iValue);
    Pattern(iValue);

    return 0;
}