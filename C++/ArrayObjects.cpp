#include <iostream>
using namespace std;

class student{
    public:
    static int count;
    int number;
    void setNumber(int n){
        number=n;
    }
    void getNumber(void){
        cout<<"School code is "<<number <<" and Student Roll no is "<<count<<endl;
        count++;
    }
};
int student::count=1;

int main(){
    student skn[5];
    for(int i=0;i<=5;i++){
        skn[i].setNumber(255);
        skn[i].getNumber();
    }
    return 0;

}