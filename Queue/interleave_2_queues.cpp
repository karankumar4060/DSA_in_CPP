// interleave 2 halves of a queue of even number

// input = 1,2,3,4,5,6,7,8,9,10

// output= 1,6,2,7,3,8,4,9,5,10




#include <iostream>
#include <queue>

using namespace std;          //time= O(n)    space =O(n) 

void interleave(queue<int> &org){ // call by reference to change in original value
    int n=org.size();
    queue<int>first;

    for(int i=0; i<n/2; i++){          // time = loop n/2
        first.push(org.front());
        org.pop();
    }

    while(!first.empty()){           // time =n/2
        org.push(first.front());
        first.pop();

        org.push(org.front());
        org.pop();
    }

}
int main(){
    queue<int> org;
    for(int i=1;i<=10; i++ ){
        org.push(i);
    }

    interleave(org);

    for(int i=1;i<=10; i++ ){
        cout<<org.front()<<" ";
        org.pop();
    }

    return 0;
}