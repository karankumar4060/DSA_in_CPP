#include <iostream>
#include <cstring>
using namespace std;



int main(){   

    // to copy string from source to destination or from one string to other string 
    char str1[100];
    strcpy(str1, "apna college");
    cout << str1 << endl;

    char str2[]="hello world";
    strcpy(str1, str2);
    cout<<str1<<endl;



    // to concatenate / join str1 with str2

    char str3[]="hi im inknown";
    strcat(str1, str3);
    cout<<str1<<endl;
    cout<<str3<<endl;


    //compare 2 string based on value (-ve, 0, +ve)
    char str4[]="hello world";
    char str5[]="hello world";
    cout<<strcmp(str4, str5)<<endl;  //when equel then give 0


    char str6[]="abc";
    char str7[]="xyz";
    cout<<strcmp(str6, str7)<<endl;  // give -ve because abc < xyz  (in ASCII) compare with first digit to first digit the second with second and so on

    cout<<strcmp(str7, str6)<<endl;  // give +ve because abc > xyz  (in ASCII) compare with first digit to first digit the second with second and so on

     // give any number in -ve or +ve

    return 0;
    
} 