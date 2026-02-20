// #include <iostream>
// using namespace std;
// class animal{
// public:
//     string color;

//     void eat(){
//         cout<<"eat\n";
//     }
//     void breaths(){
//         cout<<"breaths\n";
//     }
// };

// class fish : public animal{
// public:
//     int fins;

//     void swim(){
//         cout<<"swimming\n";
//     }
// };

// int main(){
//     fish f1;
//     f1.fins=3;
//     f1.swim();
//     f1.eat();
//     return 0;
// }







// protected 


#include <iostream>
using namespace std;
class animal{
public:
    string color;

    void eat(){
        cout<<"eating\n";
    }
    void breaths(){
        cout<<"breathing\n";
    }
};

class fish : protected animal{
public:
    int fins;

    void swim(){
        eat();
        cout<<"swimming\n";
    }
};

int main(){
    fish f1;
    f1.fins=3;
    f1.swim();
    // f1.eat();    // not accesible 
    return 0;
}