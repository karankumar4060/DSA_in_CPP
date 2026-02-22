#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int, double>p1, pair<int, double>p2){
    return p1.second > p2.second;
}


int main(){
    vector<int> value={60, 100, 120};
    vector<int> weight={10, 20, 30};
    int w=50;

    vector<pair<int, double>> knapsack(value.size(), make_pair(0,0.0));

    for(int i=0; i<knapsack.size(); i++){
        double ratio=(double)value[i]/weight[i];
        knapsack[i]=make_pair(weight[i], ratio);

    }

    sort(knapsack.begin(), knapsack.end(), compare);

    double ans=0;
    for(int i=0; i<knapsack.size(); i++){

        if(knapsack[i].first <= w){
            ans=ans + (knapsack[i].first* knapsack[i].second);
            w=w-knapsack[i].first;
        }else {
            ans=ans+(knapsack[i].second*w);
            w=0;
            break;
        }

        // if(w==0) break;

    }

    cout<<ans;


    return 0;
}