#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char arr[5]={'a','b','c','d','e'};
    cout<<arr[2]<<endl;
    cout<<arr[3]<<endl;
    cout<<arr<<endl;


    char str[5]={'a','b','c','d','\0'};
    cout<<str<<endl;

    char str1[]="code";
    cout<<sizeof(str1)<<endl;
    cout<<strlen(str1)<<endl;
    cout<<str1;

    char str2[30];
    cin>>str2;    // it not take after space
    cout<<sizeof(str2)<<endl;
    cout<<strlen(str2)<<endl;
    cout<<str2;




    char str3[30];
    cin.getline(str3, 30);    // it take after space
    cout<<sizeof(str3)<<endl;
    cout<<strlen(str3)<<endl;
    cout<<str3;


    char str4[30];
    cin.getline(str4, 30,'*');    // it not take after star
    cout<<sizeof(str4)<<endl;
    cout<<strlen(str4)<<endl;
    cout<<str4;


    cout<<str4[3];   // take a single element 


    return 0;
}