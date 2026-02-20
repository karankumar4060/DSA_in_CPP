#include <iostream>
#include <cstring>
using namespace std;

int main(){   
    string str ="apna college hello";

    // give length of string
    cout<<str.length()<<endl;

    //index value
    cout<<str[2]<<endl;
    cout<<str.at(2)<<endl;

    //give element from index 1 to 5
    cout<<str.substr(1, 5)<<endl;

    // find ol and find ll after 9th index
    cout<<str.find("ol")<<endl;
    cout<<str.find("ll", 9)<<endl;

    

    return 0;
    
} 


