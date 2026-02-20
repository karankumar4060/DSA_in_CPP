// #include <iostream>
// using namespace std;
// int main(){

//     int n;

//     cout<<"enter the number";
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<",";
//     }

//     return 0;

// }


















#include <iostream>
#include <climits>
using namespace std;

void stock(int *price , int n){
    int best_buy = INT_MAX;
    int best_sell = INT_MIN;
    for(int i=0; i<n; i++){
        best_buy= min(best_buy, price[i]);

        for(int j=i+1; i<n; j++){
            best_sell =max(best_sell, price[j]); 
        }

    }
    cout<<best_buy<<", "<<best_sell;
}

    

int main(){
    int price[]={7,1,5,3,4,6};
    int n=6;
    stock(price , n);

    return 0;

}





