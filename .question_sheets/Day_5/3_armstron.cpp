#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int a=n;
    int b=0;
    while(a>0){
        int t=a%10;
        b=b+(t*t*t);
        a=a/10;
    }

    if(b==n){
        cout<<"yes";
    }else{
        cout<<"no";
    }

    return 0;
}