#include <iostream>
using namespace std;
int main(){
    int arr[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

    cout<< arr<<"="<<&arr[0][0] <<endl;
    cout<< arr+1<<"!="<<&arr[0][1] <<endl;
    cout<< arr+1<<"="<<&arr[1][0] <<endl;

    // pointer of the row
    cout<< "0th row ptr "<<arr<<endl;
    cout<< "1th row ptr "<<arr<<endl;
    cout<< "2nd row ptr "<<arr<<endl;


    // dereference  (mean value of rows)
    cout<< "0th row value "<<*arr<<endl;
    cout<< "1th row valur "<<*(arr+1)<<endl;
    cout<< "2nd row value "<<*(arr+2)<<endl;


    // give value of arr[2][2]
    cout<< *(*(arr +2)+2)<<endl;



    
    

    return 0;

}