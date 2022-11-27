#include <stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL CheckEqual(int iNo1,int iNo2)
{
    if(iNo1 == iNo2)
    {
        return TRUE;
    }
    return FALSE;
}


int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    BOOL bResult = FALSE;
    printf("Enter the two numbers:");
    scanf("%d %d",&iValue1,&iValue2);
    
    bResult = CheckEqual(iValue1,iValue2);
    if(bResult == TRUE)
    {
        printf("Given number are equal");
    }
    else
    {
        printf("Given number are not equal");
    }

    return 0;
}