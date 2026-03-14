#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=1;
    int b=1;

    for(int i=1; i<=n; i++){
        if(i%2==0) a=0;
        else a=1;
        for(int j=0; j<i; j++){

            if(a==1){
                cout<<a;
                a=0;
            }else{
                cout<<a;
                a=1;
            }
        }
        cout<<endl;
    }
}