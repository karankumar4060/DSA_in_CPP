#include <iostream>
#include <deque>

using namespace std;

class stack {
    deque<int> deq;

public:
    void push(int data){
        deq.push_back(data);
    }
    void pop(){
        deq.pop_back();
    }
    int front(){
        return deq.back();
    }

    bool empty(){
        return deq.empty();
    }
};
int main(){
    stack q;
    for(int i=1; i<=5; i++){
        q.push(i);
    }
    for(int i=0; i<5; i++){
        cout<<q.front()<<endl;
        q.pop();
    }

    return 0;
}