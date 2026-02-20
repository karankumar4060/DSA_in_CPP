// inthis question first we find the best buy price of all price 
// then finf max profit as comparing best buy off all price and price



#include <iostream>
#include <climits> //for using INT_MAX and INT_MIN
using namespace std;

void maxprofit(int *prices, int n){
    int bestbuy[100000];          // in leadcode the limits of array is present ie it takes 100000
    bestbuy[0]= INT_MAX;
    for(int i=1; i<n; i++){
        bestbuy[i]= min(bestbuy[i-1], prices[i-1]);

    }
    int maxprofit =0;
    for(int i=0; i<n; i++){
        int currentprofit = prices[i]- bestbuy[i];
        maxprofit = max(maxprofit, currentprofit);

    }
    cout<<"max profit = "<<maxprofit<<endl;
}

int main(){
    int price[7]={7,6,5,4,3,2,9};
    int n=7;
    maxprofit(price , n);
    return 0;
}


