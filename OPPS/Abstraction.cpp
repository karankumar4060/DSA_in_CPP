#include <iostream>
using namespace std;


//abstract class
class shape{
public:
    // virtual void draw();        // virtual function
    virtual void draw() =0;        //pure virtual function/ abstract function
};
class circle: public shape{
    public:
    void draw(){
        cout<<"draw circle\n";
    }
};
class squre: public shape{
    public:
    void draw(){
        cout<<"draw square\n";
    }
};

int main(){
    circle c1;
    c1.draw();

    squre s1;
    s1.draw();

    shape a1;
    a1.draw();    //output:cannot declare variable 'a1' to be of abstract type 'shape

    return 0;

}