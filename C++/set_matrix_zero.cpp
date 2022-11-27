#include <bits/stdc++.h>
using namespace std;


void setZero(vector <vector <int>> &matrix){
    int row=matrix.size();
    int col=matrix[0].size();
    vector<int> matrix1 (row,-1);
    vector<int> matrix2 (col,-1);
   for(int i=0;i<row;i++){
       for(int j=0;j<col;j++){
           if(matrix[i][j]==0){
               matrix1[i]=0;
               matrix2[j]=0;
           }
       }
   }

   for(int i=0;i<row;i++){
       for(int j=0;j<col;j++){
           if(matrix1[i]==0 || matrix2[j]==0){
               matrix[i][j]=0;
           }
       }
   }
}

int main(){

    vector <vector <int>> arr;
    arr={{1,1,1},{1,0,1},{1,1,1}};
    setZero(arr);
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[0].size();j++){
            cout <<arr[i][j]<<" ";
        }
    }
    return 0;
}
