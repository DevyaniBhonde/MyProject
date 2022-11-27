#include <iostream>
using namespace std;

// spiral 2D array
int main()
{
    
    int n=4,m=4;
    int a[n][m]={1,2, 3, 7,
                 5 ,4 ,8 ,3,
                 2 ,4, 9 ,4,
                 1, 3, 4, 5};
    
    int row_start=0,row_end=n-1,column_start=0,column_end=m-1;
    
    while(row_start<=row_end && column_start<=column_end){

    //row start
    for(int col=column_start;col<=column_end;col++){
        cout<<a[row_start][col]<<" ";
    }
    
    row_start++;

    //column end 
    for(int row=row_start;row<=row_end;row++){
        cout<<a[row][column_end]<<" ";
    }
    
    column_end--;

    //row end
    for(int col=column_end;col>=column_start;col--) {
        cout<<a[row_end][col]<<" ";
    }
    
    row_end--;

    //column start
    for(int row=row_end;row>=row_start;row--){
        cout<<a[row][column_start]<<" ";
    }
    
    column_start++;
    }
    return 0;
}
