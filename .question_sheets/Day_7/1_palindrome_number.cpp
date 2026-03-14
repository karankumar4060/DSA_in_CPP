#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int a=n;
    int b=0;
    while(a>0){
        int temp=a%10;
        b=(b*10)+temp;
        a=a/10;
    }
    if(b==n) cout<<"yes";
    else cout<<"no";

    return 0;
}