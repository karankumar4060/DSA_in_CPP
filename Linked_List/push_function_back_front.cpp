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

class list{
    node* tail;
    node* head;

    public:
    list(){
        head=NULL;
        tail=NULL;
    }


    // push front

    void push_front(int val){
        node* newnode=new node(val);   // dynamic

        if(head==NULL){
            head=tail=newnode;
        }else{
            newnode->next=head;
            head=newnode;
        }
    }

    // push back

    void push_back(int val){
        node* newnode=new node(val);   // dynamic

        if(head==NULL){
            head=tail=newnode;
        }else{
            tail->next=newnode;
            tail=newnode;
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

    ll.push_back(8);
    ll.push_back(9);

    ll.print();

    return 0;

}