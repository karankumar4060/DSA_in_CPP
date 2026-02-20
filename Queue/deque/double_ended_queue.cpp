// deque mean double ended queue
// dequeue mena pop()


#include <iostream>
#include <deque>
using namespace std;
int main(){
    deque<int> deq;
    deq.push_front(1);
    deq.push_front(2);

    deq.push_back(3);
    deq.push_back(4);
    deq.push_back(5);

    deq.pop_front();

    deq.pop_back();

    cout<<deq.front();
    cout<<deq.back();

    return 0;
}