#include <iostream>
using namespace std;

class queue{
    int* arr;             //pointer
    

    int capcity;         //total size of array
    int currsize;        //number of element present in the array
    int f, r;            //f=front and r=rare

public:

    //construstor
    queue(int capcity){
        this->capcity=capcity;
        arr=new int[capcity];
        currsize=0;

        f=0;
        r=-1;
    }

    void push(int data){                  //O(1)
        if(currsize==capcity){
            cout<<"queue is full";
            return;
        }

        r = ( r + 1 ) % capcity;
        arr[r]=data;
        currsize++;
    }

    void pop(){               //O(1)
        
        if(empty()){
            cout<<"empty queue";
            return;
        }
        
        f = ( f + 1 ) % capcity;
        // delete (f-1); 

        currsize--;
    }

    int front(){          //O(1)
        if(empty()){
            cout<<"empty queue";
            return -1;           
        }
        return arr[f];


    }
    
    bool empty(){
        return currsize==0;
    }
    

};

int main(){

    queue q(6);     // here 6 is capcity
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    
    cout<<q.front()<<endl;
    q.pop();
    q.pop();
    cout<<q.front()<<endl;
    q.push(6);
    cout<<q.front()<<endl;
    

    return 0;
}