#include <iostream>
using namespace std;

int last_o(int arr[], int i, int target){
    if(i<0){
        return -1;
    }

    if(arr[i]==target){
        return i;
    }

    return last_o(arr, i-1, target);
}

int main(){
    int arr1[5]={1,2,3,4,5};
    int arr2[5]={3,2,1,4,5};
    cout<<last_o(arr1 , 4 , 5 )<<endl;
    cout<<last_o(arr2 , 4 , 3 );
    return 0;
}