#include <iostream>
using namespace std;

// char dublicate(){


// }
int main(){
    string s="kkaarraann";
    int n=s.length();

    bool arr[26]={0};
    string st;
    for(int i=0; i<n; i++){
        int b=s[i]-'a';
        if(arr[b]==false){
            arr[b]=true;
            st.push_back(s[i]);
        }
        
    }

    cout<<st;
    // int a[i]


    
    // int a='a';
    // int b='b';

    // cout<<a-a<<endl;
    // cout<<b-a;

    return 0;
}



