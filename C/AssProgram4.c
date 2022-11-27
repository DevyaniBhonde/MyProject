#include<stdio.h>
#include<stdlib.h>
void NumberOfDigits(int Arr[], int iLength)
{
    int iFrequency = 0;
    int iCnt = 0;
    for(int iCnt = 0; iCnt <iLength; iCnt++)
    {
        if((Arr[iCnt] % 10) == 3)
        {
            //Arr[iCnt] = Arr[iCnt] / 10;
            iFrequency ++;
        }
        
    }
    printf("The %d contains 3 0r more than 3 digits in it\n",Arr[iCnt]);
}
int main()
{
    int iSize = 0;
    int *ptr = 0;
    int i = 0;

    printf("Enter number of elements you want: ");
    scanf("%d",&iSize);
    
    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter elements\n");
    for(int i = 0; i<iSize; i++)
    {
        scanf("%d",&ptr[i]);
    }

    NumberOfDigits(ptr, iSize);
    
    free(ptr);
    return 0;
}