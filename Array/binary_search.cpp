#include <iostream>
using namespace std;
int binary_search(int arr[], int n, int key) {

    int start = 0;
    int end = n - 1;
   
    while(start<=n){
        int mid=(start+end)/2;
        if (arr[mid]==key){
            return mid;
            // break;
        }
        else if (arr[mid]>key){
            end=mid-1;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
    }
    return -1;
}

int main(){

    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(int);

    cout<<binary_search(arr, n, 8);

    return 0;


}