// set ith bit mean change the bit value in ith place if it is 1->0 ans 0->1

#include <iostream>
using namespace std;
int main(){
    int n=6;
    int i=3;

    int bitmask=1 <<i;        //similar as get ith bit only apply or 
    int a=n|bitmask;
    cout<<a;
   
    return 0;
}