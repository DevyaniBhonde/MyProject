#include<stdio.h>

int Addition(int iValue1,int iValue2)
{
    int iOutput=0;
    iOutput=iValue1+iValue2;
    return iOutput;

}

int main()
{
    int in1=10;
    int in2=11;
    int iAns=0;
     iAns=Addition(in1,in2);
     printf("Addition is:%d\n",iAns);
    return 0;
}