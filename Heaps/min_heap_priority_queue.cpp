// integer


// #include <iostream>
// #include <queue>
// using namespace std;

// int main(){
//     priority_queue<int, vector<int>, greater<int>> pq;

//     pq.push(5);
//     pq.push(10);
//     pq.push(3);
//     pq.push(9);
//     pq.push(4);
//     pq.push(7);

//     cout<<"top :"<<pq.top()<<endl;


//     while(!pq.empty()){
//         cout<<"top :"<<pq.top()<<endl;
//         pq.pop();
//     }

//     return 0;
// }





//string 


#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main(){
    priority_queue<string, vector<string>, greater<string>> pq;

    pq.push("hello world");
    pq.push("helloworld");
    pq.push("karan");
    pq.push("c++");


    cout<<"top :"<<pq.top()<<endl;


    while(!pq.empty()){
        cout<<"top :"<<pq.top()<<endl;
        pq.pop();
    }

    return 0;
}