#include <iostream>
using namespace std;
class Car{
    private:
    string name;
    string color;

    public:

    car(){
        cout<<"without parameter";
    }
    // user define constructor, this is also automatically created.
    Car(string nameval, string colorval){
        cout<<"contract is called , object being created\n";
        name = nameval;
        color = colorval;

    }


    // Car(string name, string color){
    //     cout<<"contract is called , object being created\n";
    //     this ->name = name;           // here "name" is same (left "name" is object id and right "name" is parameter)
    //     this ->color = color;        // we also define this type of constractor using "this" here tha name is same

    // }



    //function
    void start(){
        cout<<"car start\n";
    }
    void stop(){
        cout<<"car stopped\n";
    }

    // getter
    string getname(){
        return name;
    }
    string getcolor(){
        return color;
    }
};
int main(){
    // constructor created here
    Car c1();   // non-permiter constructor
    
    // constructor with value
    Car c2("audi", "black");    // permiter constructor
    cout<<"name :" <<c2.getname()<<endl;
    cout<<"color: "<<c2.getcolor()<<endl;

    return 0;
}




























//another example 


#include <iostream>
using namespace std;
class user{
private:
    int id;
    string password;

public:
    string username;

    user(int id ){

        this -> id=id;
    }
    void setpassword(string password){
        this->password=password;
    }

    string getpassword(){
        return password;
    }

};

int main(){
    user user1(101);
    user1.username="abc";
    user1.setpassword("aaabc");

    cout<<"username: "<<user1.username<<endl;
    cout<<"password: "<<user1.getpassword()<<endl;
    return 0;
}