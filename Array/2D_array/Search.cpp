#include <iostream>
using namespace std;
bool search(int arr[][4], int n, int m, int key){

    // Brute force

    // for(int i=0; i<n; i++){
    //     for(int j=0; j<m; j++){
    //         if(arr[i][j]==a){
    //             cout<<i<<" ,"<<j;
    //             break;
    //         }
    //     }
    // }





    // Row/ column wise













    // staircase search

    int i=0, j=m-1;
    while(i<n && j>=0){
        if(arr[i][j]==key){
            cout<<i<<" ,"<<j;
            return true;
        }
        else if(key<arr[i][j]){
            j--;
        }
        else if(key>arr[i][j]){
            i++;
        }
    }

    // cout<<i<<","<<j;
    cout<<"not";
    return false;
    


}
int main(){
    int arr[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int n=4,m=4;
    int a=5;
    search(arr, n, m, a);

    return 0;

}