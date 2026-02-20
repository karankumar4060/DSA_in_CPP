#include <iostream>
using namespace std;
int main(){
    int n=5;    //101
    int i=2;

    // 1st way ................................
    
    int num=n>>i;    //right shift = 001
 
    if(!(num&1)){            // chech num is 1 or not
        cout<<"0";
    }else{
        cout<<"1";
    }



    // 2nd way ...............................
    int bitmask = 1<<i;            //bitmask= 100
    if(!(n & bitmask)){            //and operation  = 100 & 101  and check 1 or 0;
        cout<<"0";                  
    }else{
        cout<<"1";
    }
    return 0;

}