#include <stdio.h>

void function(){
    static int A=10;//it will store in data section...it holds the data i.e 1when we increment it it gives 11 and again calling function gives 12
    int B=20;//21 21
    A++;
    B++;
    printf("Value of A :%d\n",A);
    printf("Value of B :%d\n",B);

}
int main(){
       function();
       function();

}