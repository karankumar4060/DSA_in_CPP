#include <iostream>
using namespace std;
int main(){

    int num;
    cout<<"enter the number = ";
    cin>>num;

    int a=num;
    int b=0;

    while(a>0){
        int r=a%10;
        b=b+(r*r*r);
        a=a/10;
    }
    if(num==b){
        cout<<"armstrong number";
    }else{
        cout<<"not armstrong number";
    }

    return 0;
}