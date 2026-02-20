
// Question 4 : Write a program to calculate the area of a circle.
// Input : r (radius) Output : PI*r*r (area)

#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int r;
    cout<<"radius of circle = ";
    cin>>r;

    float area=(22/7) * r * r;

    cout<<"area = "<<area;

    return 0;
}