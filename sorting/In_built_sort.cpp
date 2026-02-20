#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int arr[8]={1,4,1,3,2,4,3,7};
    int n=8;

    // assending order
    //complexity =o(nlogn)  

    // sort(arr, arr+n);  //sort(start, end)  sort whole array  
    // sort(arr+2, arr+6)   // sort from index 2 to index 6 only



    // decending order

    sort(arr, arr+n, greater<int>());

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;


}