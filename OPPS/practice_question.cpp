//question 1



// #include <iostream>
// using namespace std;

// class A{
//     public:
//     A(){
//         std::cout<<"con parant A"<<std::endl;
//     }
//     ~A(){
//         std::cout<<"disc parant A"<<std::endl;
//     }
// };

// class B :public A{
//     public:
//     B(){
//         std::cout<<"con child B"<<std::endl;
//     }
//     ~B(){
//         std::cout<<"disc child B"<<std::endl;
//     }
// };
// int main(){
//     B b1;
//     return 0;
// }







// qurstion 2



#include <iostream>
using namespace std;

class base{
    public:
   virtual void print(){
    std::cout<<"base"<<std::endl;

   }
};

class derived :public base{
    public:
   void print() override {          // no need tutput is same write override the oy
    std::cout<<"derived"<<std::endl;

   }
};
int main(){
    base* b=new derived();
    b->print();
    delete b;

    return 0;
}



