// clear ith bit mean change the bit value in ith place if it is 1, example 1->0 ans 0->0

#include <iostream>
using namespace std;
int main(){
    int n=6;
    int i=1;

    // first take 1 then left set, then not, then & bit operation

    int bitmask=~(1 <<i);             //simillar to get ith bit apple not operatoe
    int a=n&bitmask;
    cout<<a;
   
    return 0;
}