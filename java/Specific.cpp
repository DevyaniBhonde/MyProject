#include<iostream>
using namespace std;

int Addi(int i,int j)
{
    int ans = 0;
    ans=i+j;
    return ans;
}

int Addf(float i,float j)
{
    float ans = 0;
    ans=i+j;
    return ans;
}
int main()
{
    int a= 10,b = 11,iRet =0;
    float x= 90.1f,y = 67.8f, fRet = 0.1f;
    iRet = Addi(a,b);
    fRet = Addf(x,y);

    cout<<"Addition of integers:"<<iRet <<"\n";
    cout<<"Addition of floats:"<<fRet <<"\n";
    return 0;
}