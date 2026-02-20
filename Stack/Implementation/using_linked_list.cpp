// // using STL





// #include <iostream>
// #include <vector>
// #include <list>        
// using namespace std;


// template<class T>
// class stack{
//     list<T> ll;

//     public:
//     void push(int val){
//         ll.push_front(val);
//     }

//     void pop(){
//         ll.pop_front();
//     }

//     T top(){
//         return ll.front();
//     }

//     bool isempty(){
//         return ll.size()==0;
//     }

// };

// int main(){
//     stack<int>s;
//     s.push(3);
//     s.push(2);
//     s.push(1);

//     while(!s.isempty()){
//         cout<<s.top()<<" ";
//         s.pop();
//     }
//     return 0;
// }




















// without using STL

#include <iostream>
#include <vector>
// #include <list>        
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
class stack{
    node<T>* head;

    public:

    //constructor
    stack() {
        head = NULL;
    }

    // Destructor to clean memory
    ~stack() {
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
    stack<int>s;
    s.push(3);
    s.push(2);
    s.push(1);

    while(!s.isempty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}

