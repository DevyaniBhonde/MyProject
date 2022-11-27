#include<stdio.h>
#include<stdlib.h>


int Maximum(int Arr[],int iLength)
{
    int iCnt = 0;
    int iMax= 0;
    for(iCnt = iLength-1;iCnt >= 0;iCnt--)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
        
    }
    
    return iMax;
}

int main()
{
    int iSize = 0;
    int iResult = 0;
    int iCnt = 0;
    
    int *p = NULL;
    printf("Enter the size :");
    scanf("%d",&iSize);
    
    
    p = (int*)malloc(sizeof(int)*iSize);
    
    if(p == NULL)
    {
        printf("Unable to allocate the memory");
        return -1;
    }
    printf("Enter %d elements:",iSize);
    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }
    iResult = Maximum(p,iSize);
    printf("Maximum number is:%d",iResult);
    
    free(p);

    return 0;
}
