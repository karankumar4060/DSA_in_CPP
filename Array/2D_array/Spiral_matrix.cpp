#include <iostream>
using namespace std;
void spiral_matrix(int matrix[][4], int n, int m){
    int srow=0, scol=0;
    int erow=n-1, ecol=m-1;

    while(srow<=erow && scol<=ecol){
        // top
        for(int i=scol; i<=ecol;i++){
            cout<<matrix[srow][i]<<",";
        }
        // cout<<endl;

        // right
        for(int i=srow+1; i<=erow; i++){
            cout<<matrix[i][ecol]<<",";
        }

        // bottom
        for(int i=ecol-1; i>=scol; i--){
            cout<<matrix[erow][i]<<",";
        }

        // left

        for(int i=erow-1; i>=srow+1; i--){
            cout<<matrix[i][scol]<<",";
        }

        srow++; scol++;
        erow--; ecol--;
    }

    
}
int main(){
    // int arr[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    // int n=4,m=4;
    // spiral_matrix(arr, n, m);

    int arr[5][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};
    int n=5,m=4;
    spiral_matrix(arr, n, m);


    return 0;
}