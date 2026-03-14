#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


// activity  selection


// bool compare(pair<int, int>p1, pair<int, int> p2){
//     return p1.second<p2.second;
// }

// int activity_selection(vector<int>start, vector<int>end){
//     vector<pair<int, int>> sorted_activity(end.size(), make_pair(0,0));

//     for(int i=0; i<sorted_activity.size(); i++){
//         sorted_activity[i]=make_pair(start[i],end[i]);
//     }

//     sort(sorted_activity.begin(), sorted_activity.end(), compare);

//     int ans=1;
//     int last_end = sorted_activity[0].second;

//     for(int i=1; i<sorted_activity.size(); i++){
//         if(sorted_activity[i].first < last_end){
//             ans++;
//             last_end = sorted_activity[i].second;
//         }
//     }

//     return ans;

// }


// int main(){
//     vector<int> start= {1,3,0,5,8,5};
//     vector<int> end={2,4,6,7,9,9};

//     cout<<activity_selection(start ,end);
    
//     return 0;
// }




// fraction knapsack


// bool compare(pair<int, double>p1, pair<int, double> p2){
//     return p1.second>p2.second;
// }


// int main(){
//     vector<int> value={60, 100, 120};
//     vector<int> weight={10, 20, 30};
//     int w=50;

//     vector<pair<int, double>> ratio(value.size(), make_pair(0,0.0));

//     for(int i=0; i<value.size(); i++){
//         double r=(double)value[i]/weight[i];
//         ratio[i]=make_pair(weight[i], r);
//     }

//     sort(ratio.begin(), ratio.end(), compare);
    
//     double ans=0;

//     for(int i=0; i<ratio.size(); i++){
//         if(w>= ratio[i].first){
//             ans=ans+(ratio[i].first* ratio[i].second);
//             w=w-ratio[i].first;
//         }else{
//             ans=ans+(w*ratio[i].second);
//             w=0;
//             break;
//         }
//     }

//     cout<<ans;

//     return 0;
// }







// min coin

// int num_coin(vector<int> coins, int value){

//     int n=coins.size();
//     int ans=0;
//     int v=value;

//     for(int i=n-1; i>=0 && v>0; i--){
//         if(coins[i]<=v){
//             ans=ans+(v/coins[i]);
//             v=v%coins[i];
//         }
//     }
//     cout<<ans;

//     return ans;
// }



// int main(){
//     vector<int> coins={1,2,5,10,20,50,100,500,2000};

//     int value=1099;

//     num_coin(coins, value);
//     // cout<<a;

//     return 0;
// }











// class Node{

//     public:
//     int data;
//     Node* left;
//     Node* right;
    
//     Node(int data){
//         this->data=data;
//         left=right=NULL;
//     }
// };

// static int idx=-1;

// Node* buildtree(vector<int> nodess){
//     idx++;

//     if(nodess[idx]==-1){
//         return NULL;
//     }

//     Node* currnode = new Node(nodess[idx]);
//     currnode->left =buildtree(nodess);
//     currnode->right =buildtree(nodess);

//     return currnode;
// }

// int main(){
//     vector<int> nodes={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
//     Node* root=buildtree(nodes);

//     cout<<"root="<<root->data<<endl;
//     return 0;
// }



















// class Node{
//     public:
//     Node* left;
//     Node* right;
//     int data;

//     Node(int data){
//         this->data=data;
//         left=right=NULL;
//     }
// };

// static int idx=-1;

// Node* buildtree(vector<int> nodess){
//     idx++;

//     if(nodess[idx]==-1){
//         return NULL;
//     }

//     Node* currnode = new Node(nodess[idx]);
//     currnode->left = buildtree(nodess);
//     currnode->right =buildtree(nodess);

//     return currnode;
// }

// int main(){

//     vector<int> nodes={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};

//     Node* root=buildtree(nodes);
//     cout<<root->data;

//     return 0;
// }





int main() { 
    int a = 5;
    if (++a*5 <= 25) {
        cout<<"Hello\n";
        cout<<a;
    } else {
        cout<<"Bye\n";
        cout<<a;
    }
    return 0;
}



