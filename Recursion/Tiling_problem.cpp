// QUESTION :- count total way to tile a floor (2xn) with tiles (2x1).

//                  GOOGLE, AMAZON

// their are two choice i can place the till either vertically ot horizontally.

// we have cohice t[2*n]

// for vertical(|) = t[2*(n-1)]        and for horizontal(-) = t[2*(n-2)]
// recurence relation = f(n)=f(n-1) + f(n-2)
//                        (vertical)  (horizontal)

//                       now basecase
// if n=0
// the possible way is 1  (because their is a now way to put till is the 1 way )

// if n=1
// the possble way is also 1 (because we can pua 1 till in vertical way)

#include <iostream>
using namespace std;

int tilling(int n){   // 2*n

    if(n==0 || n==1){                                                         
        return 1;
    }
    //vertical choice
    // int ans1=tilling(n-1);   // 2*(n-1);

    // horizontal choice    
    // int ans2=tilling(n-2); // 2*(n-2)
    
    // return ans1+ans2;


    return tilling(n-1)+tilling(n-2);


}

int main(){
    cout<<tilling(4);

    return 0;
}