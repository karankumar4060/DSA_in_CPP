#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(pair<int, int>p1, pair<int, int> p2){
    return p1.second<p2.second;
}

int activity_selection(vector<int>start, vector<int>end){
    vector<pair<int, int>> sorted_activity(end.size(), make_pair(0,0));

    for(int i=0; i<sorted_activity.size(); i++){
        sorted_activity[i]=make_pair(start[i],end[i]);
    }

    sort(sorted_activity.begin(), sorted_activity.end(), compare);

    int ans=1;
    int last_end = sorted_activity[0].second;

    for(int i=1; i<sorted_activity.size(); i++){
        if(sorted_activity[i].first < last_end){
            ans++;
            last_end = sorted_activity[i].second;
        }
    }

    return ans;

}


int main(){
    vector<int> start= {1,3,0,5,8,5};
    vector<int> end={2,4,6,7,9,9};
    
    cout<<activity_selection(start ,end);
    
    return 0;
}