

// Question 2 : Enter cost of 3 items from the user 
// (using float data type) - a pencil, a pen and an eraser. 
// You have to output the total cost of the items back to the user as their bill.
// (Add on : You can also try adding 18% GST tax to the items in the bill as an advanced problem)


#include <iostream>
using namespace std;
int main(){

    float p,n,e;

    cout<<"pencile = ";
    cin>>p;
    cout<<"pen = ";
    cin>>n;
    cout<<"eraser = ";
    cin>>e;

    float total= p+n+e;
    float gst = (total*18)/100;
    float amount=gst+total;

    cout<<"total amount = "<<total<<"GST = "<<gst<<"total = "<<amount;

    return 0;
}