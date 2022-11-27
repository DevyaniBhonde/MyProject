#include<stdio.h>
#include<stdlib.h>


void Range(int Arr[],int iLength,int iStart,int iEnd)
{
    int iCnt = 0;
    int iIndex= 0;
    for(iCnt = iLength-1;iCnt >= 0;iCnt--)
    {
        if(Arr[iCnt] > iStart && Arr[iCnt] < iEnd)
        {
            printf("%d ",Arr[iCnt]);
        }
        
    }
}

int main()
{
    int iSize = 0;
    int iCnt = 0;
    
    int iNo1 = 0,iNo2 = 0;
    int *p = NULL;

    printf("Enter the size :");
    scanf("%d",&iSize);
    
    printf("Enter the starting of range:");
    scanf("%d",&iNo1);
    printf("Enter the ending of range:");
    scanf("%d",&iNo2);

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

    Range(p,iSize,iNo1,iNo2);
    
    
    free(p);

    return 0;
}
