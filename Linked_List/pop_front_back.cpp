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

    ~list(){
        if(head!=NULL){
            delete head;
            head=NULL;
        }

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

    //print linked list
    void print(){
        
        node* temp=head;
        while(temp!=NULL){

            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL";
    }


    //pop front

    void pop_front(){
        if(head==NULL){
            cout<<"ll is empty";
            return;
        }
        node* temp=head;
        head=head->next;

        temp->next=NULL;
        delete temp;
    }

    //pop back;
    void pop_back(){
        node* temp=head;
        // there ara two way to for while condition

        while(temp->next != tail){
            temp=temp->next;

        }

        temp->next=NULL;  // temp = tail's previous
        delete tail;
        tail=temp;


        // and if tail not present

        // while(temp->next->next !=NULL){

        // }
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
    ll.pop_front();
    ll.print();
    cout<<endl;
    ll.pop_back();

    ll.print();
    cout<<endl;
    
    

    return 0;

}