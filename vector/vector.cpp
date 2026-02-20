#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> a;
    cout<<a.size()<<"\n";


    // capicity and size
    vector<int>b={1,2,3,4};
    cout<<"size :" << b.size()<<endl;    //4
    cout<<"capacity :"<<b.capacity()<<endl;    //4

    b.push_back(5);
    cout<<"size :"<<b.size()<<endl;    //5
    cout<<"capacity :"<<b.capacity()<<endl;   //8




    return 0; 
}