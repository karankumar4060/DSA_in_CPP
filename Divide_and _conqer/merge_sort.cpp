#include <iostream>
using namespace std;
int main(){

    void merge(int arr[], int si, int mid; int end){
        vector<int>temp;
        int i=si;
        int j= mid+1;

        while(i <= mid && j <= ei){
            if(arr[i]<=arr[j]){
                
            }
        }
    }
    void mergesort(int arr, int st, int end){
        if(si=end){
            return;
        }
        int mid= (st+end)/2;    //also for better use    mid=st+(en-st)/2;
        mergesort(int arr, int st, int mid);
        mergesort(int arr, int mid+1, int end);

        merge(arr , si , mid , end);

    }

}