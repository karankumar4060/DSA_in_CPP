#include <iostream>
#include <cstring>
using namespace std;
bool palindrome(char word[], int n){   

    int st=0, en=n-1;
    while(st<en){
        if(word[st++]!=word[en--]){
            cout<<"no";
            return false;          
        }       
    }
    cout<<"yes";
    return true;
}

int main(){   
    char word[]="racecar";
    palindrome(word, strlen(word));
    return 0;
    
}