#include<stdio.h>
int main(){
    char ch='A';
    int i=90;
    float f=56.12;
    double d=3.14456;
    printf("Address of each variable\n");
    printf("Address of ch: %p\n",&ch);
    printf("Address of i: %p\n",&i);
    printf("Address of f: %p\n",&f);
    printf("Address of d: %p\n",&d);
    
    printf("Size of each variable\n");
    printf("Size of character: %d\n",sizeof(ch));
    printf("Size of integer: %d\n",sizeof(i));
    printf("Size of float: %d\n",sizeof(f));
    printf("Size of doublp: %d\n",sizeof(d));
    return 0;

}