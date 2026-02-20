// we are given an infinity supply of the denominations [1,2,5,10,20,50,100,500,2000].
// find min. number of coins to make change for a value V.


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int get_min_coins(vector<int> coins, int v){        //O(n)
    int ans =0;
    int n= coins.size();

    for(int i=n-1; i>=0 && v>0; i--){
        if(v>=coins[i]){
            ans += v/coins[i];
            v = v%coins[i];
        }
    }

    cout<<"min coins for change = "<<ans <<endl;
    return ans;
}


int main(){
    vector<int> coins={1,2,5,10,20,50,100,500,2000};
    int v=1099;

    get_min_coins(coins, v);

    return 0;
}