#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{
    int iCnt = 0;
    for(iCnt = 0;iCnt < iLength;iCnt++)
    {
        if(Arr[iCnt]% 3 == 0 && Arr[iCnt] % 5==0)
        {
            printf("%d ",Arr[iCnt]);
        }
    }
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
    printf("Numbers which are divisible by 5 and 3 are :");
    Display(p,iSize);
    
    free(p);

    return 0;
}