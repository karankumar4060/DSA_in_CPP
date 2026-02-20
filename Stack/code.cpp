// QUESTION :- dimond pattern

// #include <iostream>
// #include <climits>
// using namespace std;
// int main(){
//     int n=4;

//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         for(int z=1;z<=2*i-1;z++){
//             cout<<"*";
//         }
//         cout<<endl;
        
//     }
//     for(int i=n;i>=1;i--){
//         for(int j=1;j<=n-i; j++){
//             cout<<" ";
//         }
//         for(int z=1;z<=2*i-1;z++){
//             cout<<"*"; 
//         }
//         cout<<endl;
//     }

//     return 0;
// }






// QUESTION butterfly


// #include  <iostream>
// using namespace std;
// int main(){
//     int n=4;
//     for (int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         for(int k=1;k<=2*(n-i) ;k++){
//             cout<<" ";
//         }
//         for(int m=1;m<=i;m++){
//             cout<<"*";
//         }        
//         cout<<endl;
//     }
//     for (int i=n;i>=1;i--){
//         for(int j=1;j<=i;j++){
//             cout<<"*";        
//         }
//         for(int k=1;k<=(n-i)*2;k++){
//             cout<<" ";
//         }
//         for(int m=i;m<=(2*i)-1;m++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }








// #include  <iostream>
// using namespace std;
// int main(){
//     int n=5;
//     for (int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             if((i%2==0 && j%2!=0) ||(i%2!=0 && j%2==0)){
//                 cout<<"0";
//             }
//             else{
//                 cout<<"1";
//             }
            
//         }
//         cout<<endl;
//     }
// return 0;
// }










// #include <iostream>
// using namespace std;
// int main(){
//     int n=5;

//     for(int i=n;i>=1;i--){
//         for(int j=1;j<=i;j++){
//             cout<<" ";        
//         }

//         for(int j=1; j<=5; j++){
//             cout<<"*";
//         }

//         cout<<endl;
//     }
// }








// #include <iostream>
// using namespace std;
// int main(){
//     int n=5;
//     for(int i=1;i<n;i++){
//         for(int j=n; j>i+1;j--){
//             cout<<"*";
//         }

//         for(int j=)

//         cout<<endl;

//     }


// }













// #include <iostream>
// using namespace std;
// int fact(int a){
//     int fact=1;
//     for(int i=1;i<=a;i++){
//         fact=fact*i;
//     }
//     return fact;
// }
// int bio(int n, int r){
//     int bio=fact(n)/(fact(r)*fact(n-r));
//     return bio;
// }
// int main(){
//     int a=bio(4,2);
//     cout<<sizeof(int)<<endl;
//     cout<<sizeof(short int)<<endl;
//     return 0;
// }










// binary to decimal number



// #include <iostream>
// using namespace std;

// void bi(int bio){
//     int b=bio;
//     int dec=0;
//     int pow=1;

//     while(b>0){
//         int last=b%10;
//         dec=dec + last*pow;
//         pow=pow*2;
//         b=b/10;
//     }
//     cout<<dec<<endl;    
// }
// int main(){
//     bi(100101);
//     return 0;
// }







// palindrome



// #include <iostream>
// using namespace std;

// void pa(int a){
//     int p = a;
//     int reverse = 0;

//     // Loop to reverse the number
//     while(p > 0){
//         int b = p % 10;       // Extract the last digit
//         reverse = reverse * 10 + b;  // Add it to reverse
//         p /= 10;              // Remove the last digit from the original number
//     }

//     cout << reverse << endl;
//     if (a == reverse){
//         cout << "Palindrome" << endl;
//     }
//     else{
//         cout << "Not a palindrome" << endl;
//     }
// }

// int main(){
//     pa(1291);  // Example number to check
//     return 0;
// }










// #include <iostream>
// using namespace std;

// void pal(int n){
//     int a=n;
//     int reverse=0;
//     while(a>0){
//         int b=a%10;
//         reverse=reverse*10+b;
//         a=a/10;
//     }
//     cout<<reverse<<endl;
//     if(reverse==n){
//         cout<<"yes";
//     }
//     else{
//         cout<<"no";
//     }
// }
// int main(){
//     pal(42124);
// }






// binary to decimal


// #include <iostream>
// using namespace std;

// void binary(int bi){
//     int a=bi;
//     int pow=1;
//     int digit=0;

//     while(a>0){
//         int b=a%10;
//         int c =pow*b;
//         digit =digit+c;

//         pow=pow*2;      

//         a=a/10;
//     }
//     cout<<digit<<endl;
// }
// int main(){

//     binary(111111);
//     binary(10110);
//     binary(10011);
//     binary(110010);
//     return 0;

// }






// binary to decimal 

// #include <iostream>
// using namespace std;
// int main(){ 
//     int n =5;
//     for(int i=1;i<=n;i++){
//         for(int j=1; j<n-1;j--){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

 




//  linear search

// #include <iostream>
// using namespace std;
// int linear(int arr[], int n , int key){
//     for(int i=0;i<n;i++){
//         if(arr[i] == key){
//             return i;
//         }
//     }
//     return -1;
// }

// int main(){
//     int arr[]={1,2,3,55,66,77,33,8,7,9,0,36,123};
//     int n=sizeof(arr)/sizeof(int);
//     cout<<linear(arr,n,1000)<<endl;

//     return 0;
// }










// reverse array without extra space

// #include <iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,55,66,77,33,8,7,9};
//     int n=sizeof(arr)/sizeof(int);
//     int start =0;
//     int end=n-1;
//         while(start<end){   
//             int temp=arr[start];
//             arr[start]=arr[end];
//             arr[end]=temp;
//             start++;
//             end--;
//         }
//      for(int i=0;i<n; i++){
//         cout<<arr[i]<<",";
//     }    
//     return 0;
// }














// reverse array with extra space

// #include <iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,55,66,77,33,8,7,9};
//     int n=sizeof(arr)/sizeof(int);

//     int rev[n];

//     for(int i=0;i<n;i++){
//         int j=n-i-1;
//         rev[i]=arr[j];      
//     }

//     for(int i=0;i<n;i++){
//         arr[i]=rev[i];
//     }

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<",";
//     }
//     return 0;
// }









// #include <iostream>
// #include <climits>
// using namespace std;

// void Brute_force(int *arr, int n){
//     int maxsum = INT_MIN;
//     for(int start=0; start<n; start++){
        
//         for(int end=start;end<n; end++){
//             int sum=0;
//             for(int i=start; i<=end; i++){
//                 // cout<<arr[i];
//                 sum+=arr[i];
//             }
//             // cout<<"="<<sum;
//             // cout<<", ";
//             maxsum= max(maxsum,sum);
//         }
//         // cout<<endl;
        
//     }
//     cout<<maxsum;
// }


// int main(){
//     // int n;    
//     // cout<<"enter the number of element of array";
//     // cin>>n;
//     // int arr[n];

//     int arr[]={3,4,5,6,7,8};
//     int n=sizeof(arr)/sizeof(int);
    
//     Brute_force(arr,n);
//     return 0;
// }








//buy and sell stock
 

// #include <iostream>
// #include <climits>
// // #include <algorithm> 
// using namespace std;

// void stock(int *price , int n){
//     int best_buy = INT_MAX;
//     int best_sell = 0;
//     for(int i=0; i<n; i++){
//         best_buy= min(best_buy, price[i]);

//         for(int j=i+1; j<n; j++){
//             best_sell =max(best_sell, price[j]); 
//         }

//     }
    
//     cout<<best_buy<<", "<<best_sell;
// }

    

// int main(){
//     int price[]={7,6,5,4,3,2,1};
//     int n=6;
//     stock(price , n);

//     return 0;

// }








// // trapping rainwater
// #include <iostream>
// #include <climits>
// using namespace std;

// void watertrap(int *arr, int n){
//     int max_left[200000] , max_right[200000];

//     max_left[0]=INT_MIN;

//     // cout<<max_left[0];

//     for(int i=1; i<n; i++){
//         max_left[i]= max(max_left[i-1], arr[i-1]);
//         cout<<max_left[i]<<", ";
//     }
//     cout<<endl;

//     max_right[n-1]=INT_MIN;
//     // cout<<max_right[n-1];
//     for(int i=n-2; i>=0; i--){
//         max_right[i]= max(max_right[i+1], arr[i+1]);

//         cout<<max_right[i]<<", ";
        
        
//     }
//     for(int i=0; i<n; i++){

// }

// int main(){
//     int arr[7]={4,2,0,6,3,2,5};
//     int n=7;
//     watertrap(arr, n);
//     return 0;
// }












// class Solution{
//     public:
//     int powerOf2(int n}{
//         int x=0;
//         while((1<<x) <=n){
//             x++;

//         }
//         return x-1;

//     }

//     int countSetBits(int n){
//         if(n==0) return 0;
//         int x = powerOf2(n);
//         return (x *pow(2,(x-1)));
//         + (n - pow(2,x) + 1);
//         + (countSetBits(n- pow(2, x)));
//     }

// };






// class Solution {
//     public:
//     void helper(vector<int>& nums, vector<vector<int>> &ans, vector<int> subsets, int index){
//         ans.push_black(subset);
//         for(inti=indx;i<nums.size; i++){
//             subset.push_back(nums[i]);
//             helper(nums, ans, subset, i+1);
//             subset.pop_back();
//         }
//     }
//     vector<vector<int>>subsets(vector<int>& nums){
//         vector<vector<int>> ans;
//         vector<int> subsets;
//         helper(nums, ans, subsets, 0);
//         return ans;
//     }
// }









// class Solution {
//     public:
//     vactor<vactor<int>> subsets(vactor<int>&nums){
//         int n= nums.size(), x=1<<n;
        
//     }
// }








// void trapping(int *arr, int n){
//     int leftMax[20000];
//     leftMax[0]=INT_MIN;
//     for(int i=1; i<n; i++){
//         leftMax[i]=max(leftMax[i-1], arr[i-1]);
//         cout<< leftMax[i]<<",";
//     }
//     cout<<endl<<endl;
//     int rightMax[20000];
//     rightMax[n]=INT_MIN;
//     for(int i=n-2; i>=0; i--){
//         rightMax[i]=max(rightMax[i+1], rightMax[i+1]);
//         cout<<rightMax[i]<<",";

//     }
//     for(int i=0; i<n ; i++){
//         cout<<leftMax[i]<<" ";
//     }
        
// }



// int main(){
//     int height[7]={4,2,0,6,3,2,5};
//     int n=7;
//     trapping(height, n);
//     return 0;
// }



// #include <iostream>
// using namespace std;
// int main(){
//     int arr[5]={5,2,4,1,3};

//     int n=5;
//     for(int i=0; i<n-1; n++){                // i=0,, 1
//         for(int j=0; j<n-1-i; j++){          // j=0,1,2,3,,  0,  
//             if(arr[j]>arr[j+1]){             // t,t,t,t,  f,
//                 swap(arr[j], arr[j+i]);      //25413, 24513, 24153, 24135,,,, 24135  

//             }
//         }
//     }
//     for(int i=0; i<n; i++){
//         cout<<arr[i];
//     }

//     // int mini=0
//     for(int i=0; i<n-1; i++){
//         int mini=i;
//         for(int j=i+1; j<n-1; j++){
//             if (arr[j]<arr[mini]){
//                 mini=j;

//             }
//         }
//         swap(arr[i], arr[mini]);
//     }

//     for(int i=0; i<n; i++){
//         cout<<arr[i];
//     }
// // ..........................................................
//     for(int i=0; i<n; i++){
//         for
//     }

// }


















// #include <iostream>
// using namespace std;

// void print(char arr[], int n) {
//     for(int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// void insertionSort(char arr[], int n){
//     for(int i=1; i<n; i++){

//         int curr = arr[i];
//         int prev = i-1;
//         while(prev >= 0 && arr[prev]>curr){
//             swap(arr[prev], arr[prev+1]);
//             prev--;
//         }
//         arr[prev +1] = curr;

//     }    

    
//     print(arr, n);
// }

// int main(){
//     char arr[5]={'f', 'b', 'a', 'c','b',};
//     insertionSort(arr, 5);
//     return 0;

// }












// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a=1;

//     if(n==1){
//         cout<<"1";
//         // break;
//     }else{
//         for(int i=1; i<n-1; i++){
//             a=a+2;
//         }
//         a=(a*a)+4;
//     }
//     cout<<a;
//     return 0;

// }



// #include <iostream>
// #include <string>
// using namespace std;
// int main(){
//     string s;
//     cin>>s;
//     int n=s.length();
//     int i=0;
//     while(i<n-1){
//         if()
//     }

// }







// #include <iostream>
// // #include <istring>
// using namespace std;
// void spril(int matrix[][4], int n, int m){

//     int scol=0, srow=0;
//     int ecol=m-1, erow=n-1;


//     while(srow<=erow && scol<=ecol){
//         // top
//         for(int i =scol; i<=ecol ;i++){
//             cout<<matrix[srow][i]<<",";
            
        
//         }

//         // right
//         for(int i=srow+1; i<=erow;i++){
//             cout<<matrix[i][ecol]<<",";
            
//         }
//         // bottom
//         for(int i=ecol-1;i>=scol; i--){
//             cout<<matrix[erow][i]<<",";
        
//         }
        
//         //left
//         for(int i=erow-1; i>=srow+1;i--){
//             cout<<matrix[i][scol]<<",";
            
//         }
//         srow++;
//         erow--;
//         scol++;
//         ecol--;

//     }
    
    

// }
//  int main(){
//     int arr[5][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};
//     int n=5,m=4;
//     spril(arr, n, m);

//     return 0;

//  }

#include <iostream>
using namespace std;

void threeSum(int nums) {
    int n=nums.size();
    for(int i=0;i<n; i++){
        for(int j=0; j<n; j++){
            for(int k=0; k<n; k++){
                if(i != j && i != k && j != k &&  nums[i] + nums[j] + nums[k] == 0){
                    cout<<nums[i];
                    cout<<nums[j];
                    cout<<nums[k];
    
                }
            }
        }
    }
    // return 0;
            
}
    



int main(){

    int nums[] = {-1,0,1,2,-1,-4};
    threeSum(nums);
    return 0;
}