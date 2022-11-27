#include<stdio.h>

int main(){
    int arr[5]={4,5,7,3,2};
    printf("Address of array is:%p\n",arr);
    printf("Address of array is:%p\n",&arr);
    return 0;
}