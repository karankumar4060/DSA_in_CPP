// this is wrong approach because if 2 ka power 0 or 1 hoga tab ya wrong dega



#include <iostream>
using namespace std;
bool check(int n){

    if(!(n & (n-1))){        //n&(n-1) ==0       
        return true;
    }else{
        return false;
    }
   
    // return 0;
}

int main(){
    cout<<check(1)<<endl;  
    cout<<check(2)<<endl;
    cout<<check(3)<<endl;
    cout<<check(4)<<endl;
    cout<<check(16)<<endl;
    cout<<check(13)<<endl;
    cout<<check(7)<<endl;
     

    return 0;
}