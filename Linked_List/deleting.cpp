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
    ~node(){
        cout<<"node destructor"<<"~node"<<data<<endl;
        if(next!=NULL){
            delete next;
            next=NULL;
        }
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
    // destroctor of list
    ~list(){

        cout<<"list descructor"<<"~list"<<endl;
        if(head!=NULL){
            delete head;
            head=NULL;
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

    void push_back(int val){
        node* newnode=new node(val);

        if(head==NULL){
            head=tail=newnode;
        }else{
            tail->next=newnode;
            tail=newnode;
        }
    }

    void print(){
        node* temp=head;
        while(temp!=0){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL";
    }
};


int main(){

    list ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    ll.push_back(8);
    ll.push_back(9);

    ll.print();
    cout<<endl;
    // ll.insert(25, 3);
    ll.print();
    cout<<endl;

    return 0;

}