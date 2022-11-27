#include <stdio.h>

void Display()
{
    int i = 0;
   // int i = 0; //gives error bcoz of redefination
   for(i = 5; i >= 1;i--)
   {
    printf("%d",i);
    //i++;//gives infinite 5
   }
}
int main()
{
    Display();

    return 0;
}