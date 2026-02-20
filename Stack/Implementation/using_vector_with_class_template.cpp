// where we store string, bool, int, float etc
// we decide this in main function



#include <iostream>
#include <vector>
#include <string>
using namespace std;

template<class T>     // it is templete parameter
class Stack {
    vector<T> vec;   //we create here T vector

public:
    // Push an element to the stack
    void push(T val) {           // here i change to T string
        vec.push_back(val);
    }

    // Check if the stack is empty
    bool isempty() {
        return vec.size()==0;
    }

    // Pop the top element
    void pop() {
        if (isempty()) {
            cout << "No element is present in the stack to pop" << endl;
            return;
        }
        vec.pop_back();
        
    }
    

    // Print the top element
    T top_ele() {
        int lastindex=vec.size()-1;
        return vec[lastindex];

    }


};

int main() {
    Stack<int> ss;    //here we declare the data type

    ss.push(4);
    ss.push(3);
    ss.push(2);
    ss.push(1);


    ss.pop();             
    ss.isempty();         
    ss.top_ele(); 
    
    while(!ss.isempty()){
        cout<<ss.top_ele()<<" ";
        ss.pop();
    }
    cout<<endl;


    Stack<string> s;    //here string  declare the data type

    s.push("kkkkkkk");
    s.push("aaaaaaa");
    s.push("rrrrrr");
    s.push("aaaaaaa");


    s.pop();             
    s.isempty();         
    s.top_ele(); 
    
    while(!s.isempty()){
        cout<<s.top_ele()<<" ";
        s.pop();
    }

    return 0;
}








