#include<stdio.h>
#include<stdio.h>
#include<fcntl.h>


int main()
{
    char Fname [20];
    int fd = 0;//fd -> File Descriptor

    printf("Enter file name that you want to open\n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDWR);
    if(fd == -1)
    {
      printf("Unable to open the file\n");
    }
    else{
        printf("File is successfully open with FD %d\n",fd);
    }
    
    return 0;

}