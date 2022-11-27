#include <iostream>
#include <climits>
using namespace std;

int main(){
    int minNo=INT_MAX;
    
    int a[]={-1,1,-2,2};
    int len = sizeof(a)/sizeof(a[0]);
    for(int i=0;i<len;i++){
        minNo=min(minNo,a[i]);
    }
    cout<<minNo;
    return 0;
}
