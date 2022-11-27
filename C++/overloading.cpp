#include <iostream>
using namespace std;

class overloading{
    public:
    //Add@2ii  ->(name mangling in cpp)
    int Add(int a,int b){
        cout<<"addition of 2 integers\n";
    }
    //Add@2ff
    float Add(float a,float b){
        cout<<"addition of float\n";
    }
    //Add@2dd
    double Add(double a,double b){
        cout<<"addition of double\n";
    }
    //Add@3iii
    int Add(int a,int b,int c){
        cout<<"addition of 3 integer\n";
    }
    //Fun@2if
    void Fun(int a,float b){

    }
    //Fun@2fi
    void Fun(float x,int y){

    }
          
};

int main()
{
    overloading obj;
    cout<<sizeof(22.85);
    return 0;
}