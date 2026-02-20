// #include <iostream>
// #include <climits>
// using namespace std;
// int main(){

//     int arr[8]={1,4,1,3,2,4,3,7};

//     int n=8;

//     int freq[10000];
//     int minval=INT_MAX,  maxval=INT_MIN;

//     for(int i=0; i<n;i++){
//         minval= min(minval, arr[i]);
//         maxval =max(maxval, arr[i]);
//         freq[arr[i]]++;
//     }
//     //     freq[arr[i]]++;
//     // }
//     for(int i=minval, j=0; i<=maxval; i++ ){
//         while(freq[i] >0){
//             arr[j++] =i;
//             freq[i]--;
//         }
//     }

//     for(int i=0; i<n; i++){
//         cout<<arr[i];
//     }

//     return 0;


// }


















#include <iostream>
using namespace std;
int main(){
    int arr[]={1,4,1,3,2,4,3,7};
    int n=sizeof(arr)/sizeof(int);
    // cout<<n;

    int arr1[10000];
    for(int i=0; i<n; i++){
        arr1[i]=0;
    }

    for(int i=0; i<n; i++){
        int a=arr[i];
        arr1[a]++;
    }

    for(int i=0; i<n; i++){
        if(arr1[i]==0){
            continue;
        }else{
            cout<<i<<" :"<<arr1[i]<<" "<<endl;

        }
        
    }
    return 0;
}