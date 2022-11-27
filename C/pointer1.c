#include<stdio.h>

int main(){
    int no=11;
    int *p=&no;
    
   // standard size of pointer is 8 ,and it is based on os and microprocessor
    printf("%d\n",p);//value inside p,i.e address of no
    printf("%d\n",&p);//address of p
    printf("%d\n",no);
    printf("%p\n",&no);//address of no
    printf("%d\n",sizeof(no));
    printf("%d\n",sizeof(p));
    printf("%d\n",*p);//11

    return 0;
}