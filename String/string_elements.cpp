#include <iostream>
#include <cstring>
using namespace std;


// two different way to retrive the element of the string sepretely

int main(){

    //first way 

    string word= "Apple";
    for(int i=0; i<word.length();i++){
        cout<<word[i]<<",";

    }

    // second way

    for(char ch : word){
        cout<<ch<<",";
    }

   

    return 0;
}



