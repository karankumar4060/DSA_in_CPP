// // span = max number of consecutive days( including current)
// //        for which price <= today's price

// //           microsoft, amazon, google, facebook, triloogy,  etc


#include <iostream>
#include <stack>
#include <vector>
using namespace std;

void stock_span(vector<int> stock, vector<int> span ){
    stack<int> s;
    s.push(0);
    span[0]=1;

    for(int i=1; i<stock.size(); i++){
        int currentprice=stock[i];

        while(!s.empty() && currentprice>=stock[s.top()]){     //here s.top  (here s is the stack of indexes not value )
            s.pop();
        }

        if(s.empty()){
            span[i]=i+1;
        }else{
            int previous_highest=s.top();
            span[i]=i-previous_highest;
        }
        s.push(i);

    }
    for(int i=0; i<span.size(); i++){
        cout<<span[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> stock={100, 80, 60, 70, 60, 85, 100};
    vector<int> span={0, 0, 0, 0, 0, 0, 0};
    stock_span(stock, span);
    return 0;
}
