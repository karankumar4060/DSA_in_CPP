//in cpp it is automaticaly creted not in java
//copy the property of one object to another



// //default copying

// #include <iostream>
// using namespace std;
// class car{

// // private:
// public:
//     string name;
//     string color;

// // public:
//     car(string name, string color){
//         this-> name=name;
//         this-> color=color;
//     }
// };

// int main(){
//     car c1("audi", "red");
//     car c2(c1);

//     cout<<c2.name<<endl;
//     cout<<c2.color<<endl;

//     return 0;
// }










//created by us

#include <iostream>
using namespace std;
class car{

public:
    string name;
    string color;

    car(string name, string color){
        this-> name=name;
        this-> color=color;
    }

    car(car &original){
        cout<<"coping original to new"<<endl;
        name= original.name;
        color=original.color;
    }
};

int main(){
    car c1("audi", "red");
    car c2(c1);

    cout<<c2.name<<endl;
    cout<<c2.color<<endl;

    return 0;
}