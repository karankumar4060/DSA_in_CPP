#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter the number for factroial = ";
    cin>>num;
    int fact=1;
    for(int i=1; i<=num; i++){
        fact *= i;
    }

    cout<<"factroial of "<<num<<" = "<<fact;

    return 0;
}