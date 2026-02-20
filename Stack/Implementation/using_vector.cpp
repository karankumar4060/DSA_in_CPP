// stack implementation using vector

// this is optemise 





#include <iostream>
#include <vector>
using namespace std;

class Stack {
    vector<int> arr_stack;

public:
    // Push an element to the stack   O(1)
    void push(int val) {
        arr_stack.push_back(val);
    }

    // Check if the stack is empty
    bool isempty() {
        return arr_stack.size()==0;
    }

    // Pop the top element     O(1)
    void pop() {
        if (isempty()) {
            cout << "No element is present in the stack to pop" << endl;
        } else {
            arr_stack.pop_back();
        }
    }
    // Print the top element
    int top_element() {
        if (isempty()) {
            cout << "No element is present in the stack to pop" << endl;
            return -1;
        }
        int lastindex=arr_stack.size()-1
        return arr_stack[lastindex];
        
    }


};

int main() {
    Stack ss;

    ss.push(4);
    ss.push(3);
    ss.push(2);
    ss.push(1);


    ss.pop();             
    ss.isempty();         
    ss.top_element(); 
    
    while(!ss.isempty()){
        cout<<ss.top_element()<<" ";
        ss.pop();
    }

    return 0;
}
























// this is long method

// #include <iostream>
// #include <vector>
// using namespace std;

// class Stack {
//     vector<int> arr_stack;

// public:
//     // Push an element to the stack
//     void push(int val) {
//         arr_stack.push_back(val);
//     }

//     // Check if the stack is empty
//     void isempty() {
//         if (arr_stack.size()==0) {
//             cout << "Stack is empty" << endl;
//         } else {
//             cout << "Stack is not empty" << endl;
//         }
//     }

//     // Pop the top element
//     void pop() {
//         if (arr_stack.size()==0) {
//             cout << "No element is present in the stack to pop" << endl;
//         } else {
//             arr_stack.pop_back();
//         }
//     }

//     // Print the top element
//     void top_element() {
//         if (arr_stack.size()==0) {
//             cout << "No element is present" << endl;
//         } else {
//             int lastindex=arr_stack.size()-1
//             cout << "Top element: " << arr_stack[index] << endl;
//         }
//     }

//     // Print all elements of the stack
//     void print_stack() {
//         if (arr_stack.size()==0) {
//             cout << "Stack is empty" << endl;
//         } else {
//             cout << "Stack (bottom -> top): ";
//             for (int val : arr_stack) {
//                 cout << val << " ";
//             }
//             cout << endl;
//         }
//     }
// };

// int main() {
//     Stack ss;

//     ss.push(4);
//     ss.push(3);
//     ss.push(2);
//     ss.push(1);

//     ss.print_stack();     

//     ss.pop();             
//     ss.isempty();         
//     ss.top_element();     
//     ss.print_stack();     

//     return 0;
// }
