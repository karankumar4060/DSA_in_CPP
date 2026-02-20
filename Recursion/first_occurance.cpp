#include <iostream>
using namespace std;

int first_o(int arr[], int n, int i, int target){
    if(i==n){
        return -1;
    }
    if(arr[i]==target){
        return i;
    }
    return first_o(arr, n,i+1, target);

}

int main(){
    int arr1[5]={1,2,3,4,5};
    int arr2[5]={3,2,1,4,5};
    cout<<first_o(arr1 , 5 , 0 , 5 )<<endl;
    cout<<first_o(arr2 , 5 , 0 , 3 );


    return 0;
}