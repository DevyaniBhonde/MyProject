#include <stdio.h>

void Display()
{
    printf("Dec Hex Char\n");
    for(int i =0;i < 128;i++)
    {
        printf("%d  %x  %c\n",i,i,i);
    }
}
int main()
{
    Display();
    return 0;
}