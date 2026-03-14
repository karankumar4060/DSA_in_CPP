#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int a=0;
    int b=1;
    cout<<a<<",";
    cout<<b<<",";

    while(n-2>0){
        int temp=a+b;
        cout<<temp<<",";
        a=b;
        b=temp;
        n--;
    }

    return 0;
}