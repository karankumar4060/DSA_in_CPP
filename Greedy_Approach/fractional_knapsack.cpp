// put items in knapsack to get the maximum total value in the knapsack


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<double, int>p1, pair<double, int>p2){
    return p1.first> p2.first;
}

int fractionalknapsack(vector<int> val, vector<int> wt, int w){
    int n=val.size();
    vector<pair<double, int>> ratio(n, make_pair(0.0 , 0));  //pair(ratio, ind) -> (double, int)
   

    for(int i=0; i<n; i++){
        double r=val[i]/(double)wt[i];   //casting
        ratio[i]= make_pair(r,i);
    }

    sort(ratio.begin(), ratio.end(), compare);   //O(nlogn)

    int ans=0; 
    for(int i=0; i<n; i++){
        int idx= ratio[i].second;

        if(wt[idx]<= w){
            ans=ans+val[idx];
            w=w- wt[idx];
        }else{
            ans += ratio[i].first * w;
            w =0;
            break;
        }
    }

    cout<< "max value = "<<ans <<endl;
    return ans;
}

int main(){
    vector<int> val={60, 100, 120};
    vector<int> wt={10, 20, 30};

    int w=50;

    fractionalknapsack(val, wt, w);
    return 0;
}