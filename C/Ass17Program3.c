#include<stdio.h>
#include<stdlib.h>


int Differnce(int Arr[],int iLength)
{
    int iCnt = 0;
    int iMax= 0,iMin = INT_MAX;
    int MaxSum = 0,MinSum =0;
    int diff = 0;
    for(iCnt = iLength-1;iCnt >= 0;iCnt--)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
            
        }
        if(Arr[iCnt]<iMin)
        {
            iMin = Arr[iCnt];
            
        }
        
    }
    MaxSum = MaxSum + iMax;
    MinSum = MinSum + iMin;
    
    diff = MaxSum - MinSum;
    
    return diff;
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
    iResult = Differnce(p,iSize);
    printf("Differnce is:%d",iResult);
    
    free(p);

    return 0;
}
