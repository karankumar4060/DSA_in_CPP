// friend_class_and_function.cpp



// #include <iostream>
// using namespace std;

// class a{
//     string secret="sshowing ecret data";

//     friend class b;    // friend declare
// };
// class b{    ///become a frd class a , b can access data of a, not a can acces data of b 
//     public:
//     void showsecret(a &obj){
//         cout<<obj.secret<<endl;
//     }
// };

// int main() {
//     a a1;
//     b b1;

//     b1.showsecret(a1);
//     return 0;
// }









//friend function


#include <iostream>
using namespace std;

class a{
    string secret="showing ecret data";

    friend class b;    // friend declare
    friend void revealsecreat(a &obj);

};
// class b{    ///become a frd class a , b can access data of a, not a can acces data of b 
//     public:
//     void showsecret(a &obj){
//         cout<<obj.secret<<endl;
        
//     }
// };

void revealsecreat(a &obj){
    cout<<obj.secret<<endl;
};

int main() {
    a a1;
    // b b1;

    // b1.showsecret(a1);
    revealsecreat(a1);
    return 0;
}