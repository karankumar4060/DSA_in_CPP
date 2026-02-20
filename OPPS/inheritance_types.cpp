//           single inheritance 

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








//         multi-level inheritance 


// #include <iostream>
// using namespace std;
// class animal{
// public:
//     string name;

//     void eat(){
//         cout<<"eating\n";
//     }
//     void breadth(){
//         cout<<"breathing\n";
//     }

// };

// class mammal : public animal{
// public:
//     void blood(){
//         cout<<"red blood\n";
//     }
// };

// class dog :public mammal{
//     public:
//     void bark(){
//         cout<<"barking\n";
//     }
// };

// int main(){

//     dog d1;
//     d1.bark();
//     d1.blood();
//     d1.eat();
//     return 0;
// }







//           multiple inheritance


// #include <iostream>
// using namespace std;
// class teacher{
// public:
//     int salary;
//     string subject;
// };

// class student{
// public:
//     int roll_no;
//     float cgpa;
// };

// class staff: public teacher, public student{
// public:
//     string name;
// };

// int main(){
//     staff s1;
//     s1.name="karan";
//     s1.cgpa=8.2;
//     s1.salary=10000000;

//     cout<<s1.name<<endl;
//     cout<<s1.cgpa<<endl;
//     cout<<s1.salary<<endl;

//     return 0;
// }









//    hierarchial inheritance


//      hybride inheritance

