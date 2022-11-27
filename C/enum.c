#include<stdio.h>

enum day{Mon,Tue,Wen,Thus,Fri,Sat};

int main(){
    enum day week;
    int arr[6]={1000,2000,3000,4500,5000,2000};
    printf("Salary of Thusday is:%d\n",arr[Thus]);
    return 0;

}