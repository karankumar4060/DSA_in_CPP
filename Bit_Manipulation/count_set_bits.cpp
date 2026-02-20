// count_set_bits.cpp
// example 101101= 4



#include <iostream>
using namespace std;
int countbit(int num){
    int count =0;
    while(num>0){
        int last=num & 1;
        count +=last;
        num=num>>1;
    }
    cout<< count<<endl;
    return count;

}
int main(){

    countbit(10);
    countbit(7);

    return 0;

}