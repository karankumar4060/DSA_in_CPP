#include <iostream>
#include <cstring>
using namespace std;
void toUpper(char word[], int n){
    for(int i=0; i<n; i++){
        char ch=word[i];
        if(ch>='A' && ch<='Z'){
            continue;
        }
        else{
            // int pos=ch-'a';
            // int posuppper= 'A'+pos;
            // word[i]=posuppper;

            word[i]= 'A'+ ch-'a';
        }

        // cout<<word;
    }

}
int main(){
    char word[]= "ApPle";
    toUpper(word, strlen(word));

    cout<<word;    

    return 0;
}