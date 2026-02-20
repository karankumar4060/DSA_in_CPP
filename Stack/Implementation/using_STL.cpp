
#include <iostream>
#include <vector>
#include <stack>      // required in STL   
using namespace std;

template<class T>
class node{
    public:
    T data;
    node* next;

    node(T val){
        data=val;
        next=NULL;
    }
};

template<class T>
class Stack{           //In cpp , when use stl to implement stack , list we write in small latter and 
                       //we write first letter capital when we write class ,  
    node<T>* head;

    public:

    //constructor
    Stack() {
        head = NULL;
    }

    // Destructor to clean memory
    ~Stack() {
        while (!isempty()) {
            pop();
        }
    }


    void push(int val){
        node<T>* newnode=new node<T>(val);
        if(head==NULL){
            head=newnode;
        }else{
            newnode->next=head;
            head=newnode;
        }
    }

    void pop(){
        node<T>* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }

    T top(){
        return head->data;
    }

    bool isempty(){
        return head==NULL;
    }

};

int main(){
    stack<int>s;       // this is STL stack, here use small letter
    s.push(3);
    s.push(2);
    s.push(1);
    cout<<s.pop()<<endl;

    while(!s.empty()){          //here empty() function is use
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}

