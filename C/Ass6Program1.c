#include<stdio.h>

int main()
{
    char Name[30];
    printf("Please enter full name :");
    scanf("%[^\n]s",&Name); //will read all characters until you reach \n
    printf("Your name is %s",Name);

    return 0;
}