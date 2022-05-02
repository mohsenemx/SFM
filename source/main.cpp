#include <iostream>
#include <string>

using namespace std;

int resualt = 0;

int request1(int ,int);
int request2(int, int);
int request3(int, int);
int request4(int, int);
int request5(int, int);
void request6(int);
// i1 is first input, and i2 is second input.

int main() {
    //Main function of this app


    // Start Screen
    cout << "Welcome to SFM" << endl;
    cout << "SFM is a open source CLI Calculator for those who want to learn C++" << endl;
    cout << endl << endl;
    int o;
    o = 0;

    // Showing list of operations
    cout << "1 >> Power" << endl;
    cout << "2 >> Multiplication" << endl;
    cout << "3 >> Division" << endl;
    cout << "4 >> Addtion" << endl;
    cout << "5 >> Subtraction" << endl;
    cout << "6 >> Prime Numbers Smaller than x" << endl;
    cout << "Select what operation do you want (Default: 0): ";
    cin >> o;
    // Defining Three Variables

    int x1 , x2;
    x1 = 1;
    x2 = 1;
    // Requesting Values for Variables
    cout << "Enter Number One (Default: 1):" << " ";
    cin >> x1;
    cout << "Enter Number Two (Default: 1):" << " ";
    cin >> x2;
    cout << endl;
    
    // Checking Operation Selected
    if (o == 1) {
        int one = request1(x1 , x2);
        cout << "Your Resualt: " << one << endl;
    } else if (o == 2) {
        int two = request2(x1 , x2);
        cout << "Your Resualt: " << two << endl;
    } else if (o == 3) {
        int three = request3(x1 , x2);
        cout << "Your Resualt: " << three << endl;
    } else if (o == 4) {
        int four = request4(x1 , x2);
        cout << "Your Resualt: " << four << endl;
    } else if (o == 5) {
        int five = request5(x1 , x2);
        cout << "Your Resualt: " << five << endl;
    } else if (o == 6) {
        if (x1 < 3) {
            cout << "In IsPrime tool, Variable 1 cannot be smaller than 2!";
            
        } else {
        request6(x1);
            }
    } else {
        cout << "Entered input is wrong or unknown!";
        }
    return 0;
    // End of Main Function
 }


int request1(int i1, int i2) {
    // This is Function for Power
    int f = 1;
    for (size_t i; i <= i2; i++) {
        f = f * i1;
    }
    return f;
    // Hard, Huh?
}
int request2(int i1, int i2) {
    // This is Function for multipcation.
    resualt = i1 * i2;
    return resualt;
    // So simple, huh?
}
int request3(int i1, int i2) {
    // This is Function for division.
    resualt = i1 / i2;
    return resualt;
    // So Simple? huh x2?
}
int request4(int i1, int i2) {
    // This is Function for Addition.
    resualt = i1 + i2;
    return resualt;
    // So Simple? huh x3?
}
int request5(int i1, int i2) {
    // This is Function for Subtrtaction.
    resualt = i1 - i2;
    return resualt;
    // So Simple? huh x4?
}
void request6(int i1) {
    // This is Function for IsPrime tool.
    cout << "2" << endl;
    bool isPrime;
    for (size_t i = 3; i < i1; i += 2) {
        isPrime = true;
        for (size_t j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
            
            }
            if (isPrime == true) {
            cout << i << endl;
        }
    }
    // Hard, huh x2?
}

