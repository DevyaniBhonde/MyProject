#include <stdio.h>
#include<stdbool.h>


// %  Mod
//== Equality

bool CheckEven(int iNo)
{
    if((iNo%2)==0){
        return true;
    }
    else{
        return false;
    }

}

int main()
{
    int iValue1=0;
    bool bResult=false;
    printf("Enter one number:");
    scanf("%d",&iValue1);
    bResult=CheckEven(iValue1);
    if(bResult==true){
        printf("Number is Even");
    }
    else{
        printf("Number is Odd");
    }
    return 0;

}