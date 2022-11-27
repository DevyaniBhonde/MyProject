#include<stdio.h>

int main(){
    int Arr[5]; //static memory allocation

    int *p=NULL;
    p=(int *)malloc(sizeof(int)*5);
    //use of memory
    free(p);

    return 0; //memory of Arr gets deal