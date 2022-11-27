#include <iostream>
using namespace std;

class Maths
{
    public:    //Access Specifier
    int iNo1;   //charateristics
    int iNo2;   //characteristics

    Maths(){    //constructor(default)
        iNo1=0;
        iNo2=0;
    }
    Maths(int A,int B){  //constructor(parameterized)
        iNo1=A;
        iNo2=B;
    }
    int Addition(){      //Behaviour
        return iNo1+iNo2;
    }
    int Subtraction(){    //Behaviour
        return iNo1-iNo2;
    }

};

int main()
{
    Maths m;
    Maths n(2,5);
    n.Addition();

    return 0;
}