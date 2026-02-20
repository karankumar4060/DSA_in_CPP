#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char word[]= "Apple";
    int n=strlen(word);
    int st=0, en=n-1;
    while(st<en){
        swap(word[st], word[en]);
        st++;
        en--;
    }
    

    cout<<word;    

    return 0;
}