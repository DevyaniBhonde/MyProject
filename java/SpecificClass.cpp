#include<iostream>
using namespace std;

class Array
{
    public :
    int *Arr;
    int Size;

    Array(int length)
    {
        Size = length;
        Arr = new int[Size];
    }
    void Accept()
    {
        cout<<"Enter the values\n";
        for(int i = 0;i< Size;i++)
        {
            cin >> Arr[i];
        }
    }
    void Display()
    {
        cout<<"Values of array are:\n";
        for(int i = 0;i< Size;i++)
        {
            cout << Arr[i] <<" ";
        }
    }
};

int main()
{
    /*Array *p= NULL;

    p = new Array(5);

    p->Accept();
    p->Display();*/

    Array obj(5);

    obj.Accept();
    obj.Display();


    return 0;
}