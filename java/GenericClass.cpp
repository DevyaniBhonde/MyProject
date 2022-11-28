#include<iostream>
using namespace std;

template<class T>
class Array
{
    public :
    T *Arr;
    int Size;

    Array(int length)
    {
        Size = length;
        Arr = new T[Size];
    }
    void Accept()
    {
        cout<<"\nEnter the values\n";
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
    Array<int> obj(5);
    obj.Accept();
    obj.Display();

    Array<float>obj1(5);
    obj1.Accept();
    obj1.Display();
    
    Array<char>obj2(5);
    obj2.Accept();
    obj2.Display();

    return 0;
}