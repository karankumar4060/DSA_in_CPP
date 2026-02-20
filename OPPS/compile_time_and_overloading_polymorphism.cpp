//   compile time polymorphism


//      function overloading

#include <iostream>
using namespace std;
class print{
    public:
    void show(int x){
        cout<<"int: "<< x <<endl;
    }

    void show(string str){
        cout<<"string :"<< str <<endl;
    }
};

int main(){
    print p1;
    p1.show(25);
    p1.show("karan kumar");

    return 0;
}




//                     operator overloading

// #include <iostream>
// using namespace std;

// class complex{
//     int real;
//     int img;

// public:
//     complex(int r, int i){
//         real=r;
//         img=i;
//     }
//     void shownum(){
//         cout<<real<<" + "<<img<<"i\n";
//     }

//     //operation overloading
//     void operator +(complex &c2){   // we also write obj in c2
//         int resReal =this ->real+c2.real;
//         int resImg =this ->img+c2.img;

//         complex c3(resReal, resImg);
//         cout<<"res= ";
//         c3.shownum();
//     }
// };

// int main(){
//     complex c1(1,2);
//     complex c2(3,4);

//     c1.shownum();
//     c2.shownum();

//     c1+c2;

//     return 0;
// }



