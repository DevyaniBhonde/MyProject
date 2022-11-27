#include<iostream>
using namespace std;

class Base
{
    public:
    int A;
    int B;
    void fun()
    {
        cout<<"Base Fun\n";
    }

};

class Derived:public Base
{
   public:
    void fun(){
        cout<<"Derived";
    }
};

int main()
{
    Derived dobj;
    dobj.fun();
    return 0;
}