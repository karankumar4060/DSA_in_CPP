#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(pair<int, int>p1, pair<int, int>p2){
    return p1.second<p2.second;
}

int main(){
    vector<int> start={1,2,3,4,5,6};
    vector<int> end ={4,2,7,9,5,3};

    vector<pair<int, int>> paring(6, make_pair(0,0));

    for(int i=0; i<6; i++){
        paring[i]= make_pair(start[i], end[i]);
    }

    for(int i=0; i<paring.size(); i++){
        cout<<paring[i].first<<" -> "<<paring[i].second<<endl;
    }

    sort(paring.begin(), paring.end(), compare);

    cout<<"--------after sort----------"<<endl;

    for(int i=0; i<paring.size(); i++){
        cout<<paring[i].first<<" -> "<<paring[i].second<<endl;
    }

    return 0;

}