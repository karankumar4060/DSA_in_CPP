#include <iostream>
using namespace std;
int main(){
    // declaration of 2d array
    int student[2][3]={{1,2,3},{4,5,6}};


    // input and output 2d array

    int n=2, m=2;
    int arr[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];

        }

    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<arr[i][j]<<", ";

        }
        cout<<endl;
    }
    
}