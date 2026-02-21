#include <iostream>
#include <climits>
using namespace std;
void kadane_algo(int *arr, int n ){
    int sum=0;
    int maxsum= INT_MIN;

    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        maxsum= max(maxsum,sum);
        if (sum<0){
            sum=0;
        }
    }
    cout<<maxsum;
}

int main(){
    int arr[6]={6,7,2,3,4,5};   //{-2,-3,-6,-5,-4,-2};
    int n=6;
    kadane_algo(arr,n);
    return 0;
}
