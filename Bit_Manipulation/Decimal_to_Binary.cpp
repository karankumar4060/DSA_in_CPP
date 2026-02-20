#include <iostream>
using namespace std;
int main(){
    int num=30;
    int pow =1;
    int bin=0;

    while(num>0){
        int a=num%2;
        bin=bin+ a*pow;
        num=num/2;
        pow=pow *10;

        // int rem = n % 2;
        // binary = binary + rem * pow;
        // n = n / 2;
        // pow = pow * 10;
    }

    cout<<bin;

    return 0;

}