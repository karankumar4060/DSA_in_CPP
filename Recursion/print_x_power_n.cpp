// complexity =  O(log(n))

#include <iostream>
using namespace std;

int power(int x, int n){
    if(n==0){
        return 1;
    }

    int halfpow=power(x, n/2);
    int half_power_square= halfpow * halfpow;

    if(n%2 !=0){    // this is for odd power
        return x* half_power_square;
    }
    return half_power_square;

}

int main(){
    cout<<power(2,5);

    return 0;
}











// complexity =  O(n)


// ???????????????????????? find 