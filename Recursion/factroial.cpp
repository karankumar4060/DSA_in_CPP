#include <iostream>
using namespace std;

// 0!=1; 1!=1; 

int fact(int n){
    if(n==0){
        return 1;
    }
    return n*fact(n-1);
 
}

int main(){
    int ans=fact(4);
    cout<<ans;
    return 0;
}