#include<stdio.h>


struct Demo{
      int *p;

};
int main(){
    struct Demo obj;
    struct Demo obj2;
    obj.p=&obj2;
    printf("%d",obj.p);
    return 0;
}