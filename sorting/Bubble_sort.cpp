#include <iostream>
using namespace std;
int main(){
    int arr[5]={5,3,4,2,1};
    int n=5;

    for(int i=0; i<n-1; i++){
        bool isSwap =false;          //intially it is false, it used ,if array is allready sorted ie. complexity decrease  
        for(int j=0; j<n-i-1; j++){
            if(arr[j]<arr[j+1]){          // is less then or greater then (<,>) will change then it give incresing and decresing order
                swap(arr[j], arr[j+1]);
                isSwap =true;         // if array is already sorted then it not entered in if loop ie isswap will not change it remain same false

            }       
        }
        if(isSwap==false){        // if isswap not change then it break it then only 1 time the loop is run
            break;
        }
    }

    for(int i=0; i<n; i++){
        cout<<arr[i];
    }

    return 0;
}