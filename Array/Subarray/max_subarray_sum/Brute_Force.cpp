#include <iostream>
#include <climits> //this is for INT_MAX and INT_MIN
using namespace std;
void maxsubarray( int *arr, int n){
    int maxSum = INT_MIN; //it give max minimium value of integer

    for (int start=0; start<n; start++){
        for(int end=start; end<n; end++){
            int sum=0;
            for(int i=start; i<=end; i++){
                cout<<arr[i];                
                sum = sum + arr[i];
            }
            cout<<"="<<sum<<" , ";

            maxSum= max(maxSum, sum);
        }
        cout<<endl; 
    }
    cout<<"maximum is "<<maxSum<<endl;
}
int main(){
    int arr[6]={2,-3,6,-5,4,2};
    int n=6;
    maxsubarray(arr,n);
    return 0;
}








