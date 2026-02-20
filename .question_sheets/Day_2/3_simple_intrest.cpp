
// Question 3 : Build a Simple Interest Calculator.
// Input : principal (P), rate (R), time (T) Output : (P*R*T) / 100

#include <iostream>
using namespace std;
int main(){
    int p,r,t;
    cout<<"principal = ";
    cin>>p;
    cout<<"rate = ";
    cin>>r;
    cout<<"time = ";
    cin>>t;

    int si=(p*r*t)/100;

    cout<<"simple intrest = "<<si<<endl;

    return 0;

}