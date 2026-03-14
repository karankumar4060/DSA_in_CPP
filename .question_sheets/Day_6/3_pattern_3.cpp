#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    for(int i=n; i>0; i--){
        for(int j=i-1; j>0;j--){
            cout<<" ";
        }
        for(int z=n-i+1; z>0; z--){
            cout<<z;
        }
        if(i!=n){
            for(int p=0; p<5-i; p++){
                cout<<p+2;
            }
        }
        
        
        cout<<endl;
    }

    return 0;
}