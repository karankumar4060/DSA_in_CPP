

//             virtual function
// in virtual function a virtual function will define with "virtual" keywords
// and the same function will redefine in the clid class without "virtual" keyword


#include <iostream>
using namespace std;
class parent{
    public:
    show(){
        cout<<"parent class showing";
    }
    virtual void hello(){
        cout<<"parent hello\n";
    }
};
class child :public parent{
    public:
    show(){
        cout<<"chlid class showing";
    }

    void hello(){
        cout<<"child hello\n";
    }
};

int main(){
    child c1;
    parent *ptr;

    ptr = &c1;  // Runtime binding
    ptr->hello(); // virtual function
    

    // c1.show();
    return 0;
}


