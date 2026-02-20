

// Question 1 : In a program, input the side of a square. You have to output the area of the square.
// Input : n (side) Output : n*n (area)


#include <iostream>
using namespace std;
int main(){
    int side;
    cin>>side;
    int area=side*side;

    cout<<"area of square whose side is "<<side<<" = "<<area;
    return 0;
}