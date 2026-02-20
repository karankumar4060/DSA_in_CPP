#include <iostream>
using namespace std;
int main(){
    int arr[5]={5,1,4,2,3};
    int n=5;

    for(int i=0; i<n-1; i++){
        int mini =i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[mini]){       // is less then or greater then (<,>) will change then it give incresing and decresing order
                
                mini=j;
            }
        }

        swap(arr[i], arr[mini]);
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}













