#include<stdio.h>
#include<stdio.h>
#include<fcntl.h>
#include<io.h>

int main()
{
    char Fname [20];
    int fd = 0;

    printf("Enter file name that you want to open\n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDWR);
    if(fd == -1)
    {
      printf("Unable to open the file\n");
      return -1;

    }
    else{
        printf("File is successfully open with FD %d\n",fd);
    }
    
    write(fd,"Marvellous",10);

    close(fd);
    return 0;

}