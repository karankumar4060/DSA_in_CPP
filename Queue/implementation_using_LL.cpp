#include <iostream>
using namespace std;


class node{

    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};

class queue{
    node* head;
    node* tail;

    public:
    queue(){
        head= tail=NULL;
    }

    void push(int val){     //O(1)
        node* newnode= new node(val);
        if(head==NULL){
            head=tail=newnode;
        }else{
            tail->next=newnode;
            tail=newnode;
        }

    }

    void pop(){    //O(1)
        if(isempty()){
            cout<<"no element is present";
            return;
        }
        node* temp =head;
        head=head->next;
        delete temp;
    }

    int front(){     //O(1)
        if(isempty()){
            cout<<"no element is present";
            return -1;
        }
        return head->data;

    }

    bool isempty(){
        return head==NULL;

    }

};

int main(){
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    

    while(!q.isempty()){
        cout<<q.front()<<" ";
        q.pop();
    }


    return 0;
}