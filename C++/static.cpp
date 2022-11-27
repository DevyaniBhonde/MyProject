#include<iostream>
using namespace std;

class Demo
{
    public:
         int i;
         int j;
         static int k;
         Demo(){
            int i=0;
            int j=0;
         }
         Demo(int a,int b){
            i=a;
            j=b;
         }
        int addition(){
            return i+j;
        }


};

int Demo::k=0;

int main(){
   Demo obj1(12,10);
  cout<<obj1.addition()<<endl;
   cout<<sizeof(obj1)<<endl;//8 
   //sizeof(obj)=summation of its non-static characteristics
   //sizeof(obj)=sizeof(i)+sizeof(j);
   cout<<"Value of i in obj1:"<<obj1.i<<endl;

   cout<<"Value of k in Demo:"<<Demo::k<<endl;
    return 0;
}