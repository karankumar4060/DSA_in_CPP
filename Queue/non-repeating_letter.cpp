// find first mon-repeating letter in a stream of characters



#include <iostream>
#include <queue>

using namespace std;

void first_non_repeting(string str){     //time= O(n),    space= O(n)

    queue<char> q;
    int freq[26]={0};

    for(int i=0; i<str.size(); i++){
        char ch=str[i];
        q.push(ch);
        freq[ch-'a']++;

        while(!q.empty() && freq[q.front()-'a']>1){
            q.pop();

        }

        if(q.empty()){
            cout<<-1<<endl;
        }else{
            cout<<q.front()<<endl;
        }
    }

}

int main(){
    string str="aabccxb";
    first_non_repeting(str);
    return 0;
}