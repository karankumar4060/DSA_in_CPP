#include <iostream>
#include <vector>
using namespace std;

vector<int>pairsum(vector<int> arr, int target){
    int st=0;
    int end=arr.size()-1;
    int b=0;
    vector<int> ans;
    while(st<end){
        b=arr[st]+arr[end];
        if(b==target){
            ans.push_back(st);
            ans.push_back(end);
            return ans;
        }
        else if(b>target){
            end--;
        }else{
            st++;
        }
    }
    return ans;


} 
int main(){
    vector<int> arr={2,7,11,15};
    int target =9;
    vector<int> ans=pairsum(arr,target);
    cout<<ans[0]<<","<<ans[1] ;
   

    return 0;
}