#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
    map<int , string> m;

    m[101]="rahul";
    m[121]="neha";
    m[151]="rahul";

    cout<<m.count(101)<<endl;
    cout<<m.count(299)<<endl;


    for(auto it:m){
        cout<<"key = "<<it.first <<","<<"value =" <<it.second<<endl;
    }

    for(auto it:m){
        cout<<"duble ofkey = "<<it.first * 2<<endl;
    }

    return 0;
}