// PAIR is STL container to store 2 object 

// mean we can sort in pair of two different array, store in pairs


// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// bool compare(pair<int, int>p1, pair<int, int>p2){
//     return p1.second < p2.second;  // ascending - end
//     // return p1.second > p2.second;  // descending - end

        // return p1.first < p2.firts; // sort acending using first element
        // return p1.first > p2.first;  // sort decending using first element
// }

// int main(){
//     vector<int> start= {0,1,2};
//     vector<int> end={9,2,4};

//     vector<pair<int, int>> activity(3, make_pair(0,0));
//     // here activity is the name of pair_array
//     // here 3 pair is present
//     // "make_pair" will make 3 pairs with 0 value [(0,0), (0,0), (0,0)] 

//     activity[0]= make_pair(0, 9);
//     activity[1]= make_pair(1, 2);
//     activity[2]= make_pair(2, 4);

//     for(int i=0; i<activity.size(); i++){
//         cout<<"A"<< i <<" : "<< activity[i].first<<","<<activity[i].second<<endl;
//     }


//     //  this give error

//     // for(int i=0; i<activity.size(); i++){
//     //     cout<<activity[i]<<endl;       
//     // }

//     sort(activity.begin(), activity.end(), compare);

//     cout<<"sorted"<<endl;
//     for(int i=0; i<activity.size(); i++){
//         cout<<"A"<< i <<" : "<< activity[i].first<<","<<activity[i].second<<endl;
//     }

//     return 0;
// }









#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int,int>p1, pair<int , int>p2){
    return p1.second < p2.second;
}

int main(){

    vector<int> strat={0,1,2};
    vector<int> end ={9,2,4};

    // vector<pair<int,int>> activity;

    vector<pair<int, int>> acti(3, make_pair(0,0));

    acti[0]=make_pair(0, 9);
    acti[1]=make_pair(1, 2);
    acti[2]=make_pair(2, 4);

    for(int i=0; i<acti.size(); i++){
        cout<<acti[i].first<<" -> "<<acti[i].second<<endl;
    }

    sort(acti.begin(), acti.end(), compare);

    cout<<"----------after sort---------"<<endl;

    for(int i=0; i<acti.size(); i++){
        cout<<acti[i].first<<" -> "<<acti[i].second<<endl;
    }

    return 0;
}