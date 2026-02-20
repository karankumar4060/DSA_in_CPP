#include <iostream>
using namespace std;
int main(){
    int num=16;
    // if(num&1==1){
    //     cout<<"odd";
    // }else{
    //     cout<<"even";
    // }
    

    // other way
    if(!(num&1)){
        cout<<"even";
    }else{
        cout<<"odd";
    }

    return 0;

}


