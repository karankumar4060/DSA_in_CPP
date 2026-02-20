//shallow copy



// #include <iostream>
// using namespace std;
// class car{

// // private:
// public:
//     string name;
//     string color;
//     int *mileage;     // pointer

// // public:
//     car(string name, string color){
//         this-> name=name;
//         this-> color=color;
//         mileage= new int ;
//         *mileage=12;

//     }
//     car(car &original){
//         cout<<"coping original to new"<<endl;
//         name= original.name;
//         color=original.color;
//         mileage=original.mileage;
//     }
// };

// int main(){
//     car c1("audi", "red");
//     car c2(c1);

//     cout<<c2.name<<endl;
//     cout<<c2.color<<endl;
//     cout<<*c1.mileage<<endl;   //12 output
//     cout<<*c2.mileage<<endl;  //12 output

//     return 0;
// }















// deep copy

#include <iostream>
using namespace std;
class car{

// private:
public:
    string name;
    string color;
    int *mileage;     // pointer

// public:
    car(string name, string color){
        this-> name=name;
        this-> color=color;
        mileage= new int ;
        *mileage=12;

    }
    car(car &original){
        cout<<"coping original to new"<<endl;
        name= original.name;
        color=original.color;
        mileage= new int;
        *mileage=*original.mileage;
    }
};

int main(){
    car c1("audi", "red");
    car c2(c1);
    *c2.mileage=10;

    cout<<c2.name<<endl;
    cout<<c2.color<<endl;
    cout<<*c2.mileage<<endl;
    cout<<*c1.mileage<<endl;

    return 0;
}


