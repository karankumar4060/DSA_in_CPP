// pair elements of A and B to minimize sum of absolute differences between pairs.


#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    vector<int> A={4,1,8,7};
    vector<int> B={2,3,6,5};

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    int abs_diff = 0;

    for(int i=0; i<A.size(); i++){
        abs_diff = abs_diff + abs(A[i] - B[i]);


    }

    cout<<"MIN abs differenece  =  "<< abs_diff<<endl;

    return 0;
}