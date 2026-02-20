// Question 3 : What will be the value of x & y in the following program:

int main() {
int a = 63, b = 36;
bool x = (a < b) ? true : false; 
int y = (a > b) ? a : b;
cout << x << "," << y << endl; return 0;
}


// output   =  x = false
//             y = 63;








// Question 4 : What’ll be the output of the program:


int main() { 
    int a = 5;
    if (++a*5 <= 25) {
        cout<<"Hello\n";
    } else {
        cout<<"Bye\n";
    }
    return 0;
}





//output= Bye