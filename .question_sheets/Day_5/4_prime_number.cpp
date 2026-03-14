// #include <iostream>
// #include <cmath>
// using namespace std;

// int main(){
//     cout<<"enter number : ";
//     int n;
//     cin>>n;
    
//     int a=1, b=2;
    
//     int j=2;
//     while(j<=n){
//         bool isprime=true;
//         for(int i=2; i<=sqrt(j); i++){
//             if(j%i==0){
//                 isprime = false;
//             }
//         }
//         if(isprime==true){
//             cout<<j<<" ";
//         }
//         j++;

//     }

//     return 0;
    
// }









#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            cout<<"no";
            // break;
            return 0;
        }
    }

    cout<<"y";
    return 0;
}

