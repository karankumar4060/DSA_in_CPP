// selection the max number of activities that can be performed by a single person.
// (a person can work on one activity at a time)

// non overlaping avtivity

// way to slove
// sort activity on "end" time not start time



#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int maxactivity(vector<int> start, vector<int>end){
    int count=1;
    int endtime=end[0];

    for(int i=1; i<end.size(); i++){
        if(start[i]>=endtime){
            count++;
            endtime=end[i];
        }
    }
    return count;
     
}













// #include <iostream>
// #include <vector>

// using namespace std;

// int maxactivity(vector<int> start, vector<int> end){
//     int count=1;
//     int current_time=end[0];

//     for(int i=1; i<start.size(); i++){
//         if(start[i]>= current_time){
//             count++;
//             current_time=end[i];
//         }
//     }

//     return count;
// }



int main(){
    vector<int> start= {1,3,0,5,8,5};
    vector<int> end={2,4,6,7,9,9};

    cout<<maxactivity(start, end);

    return 0;
}