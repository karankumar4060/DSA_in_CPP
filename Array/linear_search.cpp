#include <iostream>
using namespace std;
int main(){
    int n;

    cout<<"enter the lenght of array";
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cout<<"enter the number :"<<endl;
        cin>>arr[i];
    }

     for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }


    int a;
    cout<<"enter the number for search"<<endl;
    cin>>a;

    // linear search
    for(int i=0; i<n; i++){
        if(arr[i]==a){
            cout<<"the number :"<<a<<" in index : "<<i<<endl;

        }
    }


}



// recursion 

