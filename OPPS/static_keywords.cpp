// static variables


// #include <iostream>
// using namespace std;
// void counter(){
//     static int count=0;    //without static the output is 1,1,1
//     count++;
//     cout<<"count: "<<count<<endl;
// }

// int main(){
//     counter();
//     counter();
//     counter();
//     return 0;
// }





// #include <iostream>
// using namespace std;
// class example{
//     public:
//     // int x=0;       // output 0,0,0
//     static int x;   //error   ISO C++ forbids in-class initialization of non-const static member
//                       // required insalize the x out of the box
// }; 

// int example::x = 0;

// int main(){
//     example e1,e2,e3;    
//     cout<<e1.x++<<endl;
//     cout<<e2.x++<<endl;
//     cout<<e3.x++<<endl;
//     return 0;
// }













// ststic object



// #include <iostream>
// using namespace std;
// class example{
//     public:
//     example(){
//         cout<<"constructor\n";
//     }
//     ~example(){
//         cout<<"destructor\n";
//     }    
// }; 


// int main(){
//     int a=0;
//     if(a==0){
//         example eg1;
//     }
//     cout<<"ending code\n";
//     return 0;
// }


// output:
// constructor
// destructor
// ending code




#include <iostream>
using namespace std;
class example{
    public:
    example(){
        cout<<"constructor\n";
    }
    ~example(){
        cout<<"destructor\n";
    }    
}; 


int main(){
    int a=0;
    if(a==0){
        static example eg1;
    }
    cout<<"ending code\n";
    return 0;
}


// output :
// constructor
// ending code
// destructor