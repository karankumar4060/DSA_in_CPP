#include <iostream>
using namespace std;
int main(){
    int num=11110;
    int pow=1;
    int sum =0;
    while(num>0){
        int a=num%10;
        sum= sum+ (a*pow);
        pow=pow*2;
        num=num/10;

    }

    cout<<sum;
    return 0;

}