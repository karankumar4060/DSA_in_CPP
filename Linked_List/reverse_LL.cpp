#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next =NULL;
    }
};

class list{
    node* head;
    node* tail;
    
    public:
    list(){
        head=NULL;
        tail=NULL;
    }

    void push_back(int val){
        node* newnode=new node(val);
        if(head==NULL){
            head=tail=newnode;
        }else{
            tail->next=newnode;
            tail=newnode;
        }
    }

    void push_front(int val){
        node* newnode=new node(val);
        if(head==NULL){
            head=tail=newnode;
        }else{
            newnode->next=head;            
            head=newnode;
        }
    }

    void print(){
        node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
    }


};


int main(){

    list ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);  
    ll.push_back(7);
    ll.push_back(8);
    ll.push_back(9);

    ll.print();
    cout<<endl;
   
    ll.print();
    cout<<endl;
    // cout<<ll.recursive_search(3)<<endl;
    // cout<<ll.recursive_search(55);

    return 0;

}