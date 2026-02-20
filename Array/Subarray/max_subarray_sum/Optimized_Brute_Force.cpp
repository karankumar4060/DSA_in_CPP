#include <iostream>
#include <climits> //this is for INT_MAX and INT_MIN
using namespace std;
void maxsubarray( int *arr, int n){
    int maxSum = INT_MIN; //it give max minimium value of integer

    for (int start=0; start<n; start++){
        int sum=0;
        for(int end=start; end<n; end++){
            sum=sum+arr[end];

                                    //it arr[1,2,3,4,5]
                                    // previous we do multipe time add,  1+2, 1+2+3, 1+2+3+4, 1+2+3+4+5
                                    // but now we do 1,  1+2=3,  3+3=6,  6+4=10,  10+5=15

            // for(int i=start; i<=end; i++){
            //     cout<<arr[i];                
            //     sum = sum + arr[i];
            // }
            // cout<<"="<<sum<<" , ";

            maxSum= max(maxSum, sum);
        }
       
    }
    cout<<"maximum is "<<maxSum<<endl;
}
int main(){
    int arr[6]={2,-3,6,-5,4,2};
    int n=6;
    maxsubarray(arr,n);
    return 0;
}








