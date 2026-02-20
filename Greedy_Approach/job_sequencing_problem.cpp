// // maximize the total profit if only one job can be scheduled at a time.


// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// // sort jobs in terms of profit , in decending order

// bool compare(pair<int, int> p1, pair<int, int> p2){
//     return p1.second > p2.second;
// }
// int maxprofit(vector<pair<int, int>>jobs){   //O(nlogn)

//     sort(jobs.begin(), jobs.end(), compare);

//     int profit = jobs[0].second;
//     int safe_deadline=2;

//     for(int i=1; i<jobs.size(); i++){
//         if(jobs[i].first>=safe_deadline){
//             profit += jobs[i].second;
//             safe_deadline++;
//         }
//     }

//     cout<< "max profit from jobs : "<<profit<<endl;
//     return profit;

// }

// int main(){
//     int n=4;
//     vector<pair<int, int>> jobs(n,make_pair(0,0));
//     jobs[0] =make_pair(4, 20);
//     jobs[1] =make_pair(1, 10);
//     jobs[2] =make_pair(1, 40);
//     jobs[3] =make_pair(1, 30);

//     maxprofit(jobs);

//     return 0;
// }























// maximize the total profit if only one job can be scheduled at a time.


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// sort jobs in terms of profit , in decending order

class job {
    public:
    int idx;
    int deadline;
    int profit;

    job(int idx, int deadline, int profit){
        this->idx=idx;
        this->deadline=deadline;
        this->profit=profit;
    }

};
int maxprofit(vector<pair<int, int>>pairs){   //O(nlogn)
    int n=pairs.size();
    vector<job> jobs;

    for(int i=0; i<n; i++){
        jobs.emplace_back(i, pairs[i].first, pairs[i].second); // idx,deadline, profit
    }

    sort(jobs.begin(), jobs.end(), [](job &a, job &b){     //lamdb function, capture list, empty capture list
        return a.profit > b.profit;

    });  // desecending order on basis of profit

    cout<<"selecting job"<<jobs[0].idx<<endl;
    int profit = jobs[0].profit;
    int safedeadline =2;

    for(int i=1; i<n; i++){
        if(jobs[i].deadline>= safedeadline){
            cout<<"selecting job" <<jobs[i].idx <<endl;
            profit += jobs[i].profit;
            safedeadline++;
        }
    }

    cout<<"max profit from jobs : "<<profit<<endl;
    return profit;
      

}

int main(){
    int n=4;
    vector<pair<int, int>> jobs(n,make_pair(0,0));
    jobs[0] =make_pair(4, 20);
    jobs[1] =make_pair(1, 10);
    jobs[2] =make_pair(1, 40);
    jobs[3] =make_pair(1, 30);

    maxprofit(jobs);

    return 0;
}