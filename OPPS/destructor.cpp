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

    //destructor
    ~car(){    // delating static memory allocation
        cout<<"delecting object"; 
        if(mileage !=NULL){          // delating dynamic memory allocation
            delete mileage;          // here garbage value will present so we write "mileage=NULL;"
            mileage=NULL;
        } 
    }
};

int main(){
    car c1("audi", "red");
    cout<<c1.name<<endl;
    cout<<c1.color<<endl;
    // cout<<*c2.mileage<<endl;
    cout<<*c1.mileage<<endl;

    return 0;
}


