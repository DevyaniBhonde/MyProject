#include <stdio.h>

void TableOfNum(int iNo)
{
    int iCnt = 0;
    
    for(iCnt = 1;iCnt <= 10;iCnt++)
    {
        printf("%d ",iNo * iCnt);
    }
}
int main()
{
    int iValue = 0;
    printf("Enter the value :");
    scanf("%d",&iValue);

    TableOfNum(iValue);
    return 0;
}