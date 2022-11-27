#include <stdio.h>

int main(){
    register int v1=45;//for local variable
    //it will directly store in CPU register so fast execution happen
    int v2=13;
    printf("%d\n",v1);
    printf("%d\n",v2);
    return 0;
}