#include<iostream>
using namespace std;

template<class T>
T Add(T i,T j)
{
    T ans;
    ans = i+j;
    return ans;
}

int main()
{
    int a = 10,b = 11,iRet = 0;
    float x = 90.1f,y = 67.1f, fRet = 0.1f;
    double p = 90.1,q = 67.1, dRet = 0.1;

    iRet = Add(a,b);
    fRet = Add(x,y);
    dRet = Add(p,q);

    cout<<"Addition of integers:"<<iRet <<"\n";
    cout<<"Addition of floats:"<<fRet <<"\n";
    cout<<"Addition of doubles:"<<dRet <<"\n";

    return 0;
}