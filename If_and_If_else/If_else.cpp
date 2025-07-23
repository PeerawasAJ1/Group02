#include<iostream>
using namespace std;

int main() {
    int A = 0; //Variable A=0
    cout << "Please enter a number for A: " << endl; //Show text
    cin >> A; //Input as A

    if (A == 8) { //condition if A=8
        cout << "A is 8" << endl; //show text when condition is TRUE
    } else if (A > 8) { //codition if A>8
        cout << "A is greater than 8" << endl; //show text when condition is TRUE
    } else { 
        cout << "A is less than 8" << endl; //show text when condition is TRUE
    }

    return 0;
}