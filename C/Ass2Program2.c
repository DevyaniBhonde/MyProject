#include <stdio.h>

void Display(int iNo)
{

    while(iNo >= 1 )
    {
        printf("*");
        iNo--;
    }
}
int main()
{
    int iValue = 0;
    
    printf("Enter number");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}