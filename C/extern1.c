#include <stdio.h>

extern int val1;
extern int val2;
extern void Demo();
int main(){
    printf("By using extern storage class:\n");
    Demo();
}