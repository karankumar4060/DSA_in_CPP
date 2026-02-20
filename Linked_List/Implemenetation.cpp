// it is the simple structure structure of the linked list

#include <iostream>
using namespace std;

// it a single node

class Node{
    public:
    int data;
    Node* next;

   
    Node(int val){
        data=val;
        next= NULL;

    }

};

// now create a list (group of node) which is linked list
class List{
    Node* head;
    Node* tail;

    public:
    List(){
        head=NULL;
        tail=NULL;
    }


};


int main(){
    List ll();
    return 0;
}