#include <iostream>
using namespace std;

int main(){
    int a;
    cin>>a;

    int b=0;
    while(a>0){
        int temp=a%10;
        b=b+temp;
        a=a/10;
    }

    cout<<b;

    return 0;
}