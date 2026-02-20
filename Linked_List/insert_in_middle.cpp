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

    //print linked list
    void print(){
        
        node* temp=head;
        while(temp!=NULL){

            cout<<temp->data<<"->";
            temp=temp->next;
        }
        

    }

    // insert in the middle
    void insert(int val, int pos){
        node* newnode=new node(val);

        node* temp=head;
        for(int i=0; i<pos-1; i++){
            if(temp==NULL){
                cout<<"not found invalid index";
                return;
            }
            temp=temp->next;
        }

        newnode->next=temp->next;
        temp->next=newnode;
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
    ll.insert(25, 3);
    ll.print();

    return 0;

}