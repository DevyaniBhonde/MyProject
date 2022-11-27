#include<stdio.h>

int main(){
    int Arr[4]={10,20};//member initialisation list

    printf("%d\n",Arr[0]);
    printf("%d\n",Arr[1]);
    printf("%d\n",Arr[2]);//0
    printf("%d\n",Arr[3]);//0
   
    int Brr[4];//member by member initialisation
    Brr[0]=10;
    Brr[1]=20;
    printf("%d\n",Brr[0]);
    printf("%d\n",Brr[1]);
    printf("%d\n",Brr[2]);//garbage value
    printf("%d\n",Brr[3]);//garbage value

    printf("for character\n");
    char Crr[4]={'A','c'};//member initialisation list

    printf("%c\n",Crr[0]);
    printf("%c\n",Crr[1]);
    printf("%c\n",Crr[2]);//'\0'
    printf("%c\n",Crr[3]);//'\0'


    return 0;
}