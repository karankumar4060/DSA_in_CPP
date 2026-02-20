// Question 1 : Write a C++ program to get a number from the user and print whether it's positive, negative or zero.



#include <iostream>
using namespace std;
int main(){
    int numbers;
    cout<<"numbers : ";
    cin>>numbers;
    if(numbers==0){
        cout<<"zero";
    }else if(numbers>0){
        cout<<"postive";
    }else{
        cout<<"negtive";
    }
    
    return 0;
}