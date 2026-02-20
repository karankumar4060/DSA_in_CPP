// reverse array with extra space


// #include <iostream>
// using namespace std;

// int main(){
//     int arr[]={1,2,3,4,5,6,7,8,9};
//     int n=sizeof(arr)/sizeof(int);

//     cout<<n<<endl;
//     int arrcopy[n];
//     for(int i=0;i<=n; i++){
//         int j=n-i-1;
//         arrcopy[i]=arr[j];        
//     }


//     for(int i=0; i<n; i++){
//         cout<<arrcopy[i]<<" ";
//     }

//     for(int i=0; i<n; i++){
//         arr[i]=arrcopy[i];
//     }

//     cout<<endl;

//     for(int i=0; i<n; i++){
//         cout<<arrcopy[i]<<" ";
//     }
//     return 0;
// }









// // reverse array without extra space


#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(int);
    int sta=0,end=n-1;
    while(sta<end){
        int a=arr[sta];
        arr[sta]=arr[end];
        arr[end]=a;
        sta++;
        end--;

    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}