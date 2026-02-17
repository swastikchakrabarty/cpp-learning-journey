#include <iostream>
using namespace std;

// 1. Number Square: Prints 1 to n in every line
void numberSquare(int n) {
    cout << "--- Number Square ---" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// 2. Star Square: Prints n x n grid of stars
void starSquare(int n) {
    cout << "--- Star Square ---" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
}

// 3. Character Square: Resets to 'A' every row
void characterSquare(int n) {
    cout << "--- Character Square ---" << endl;
    for (int i = 0; i < n; i++) {
        char ch = 'A'; 
        for (int j = 0; j < n; j++) {
            cout << ch << " ";
            ch = ch + 1; // Increment character using ASCII
        }
        cout << endl;
    }
    cout << endl;
}

// 4. Continuous Number Square: Numbers keep incrementing
void continuousNumberSquare(int n) {
    cout << "--- Continuous Number Square ---" << endl;
    int num = 1; 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << num << " ";
            num++; 
        }
        cout << endl;
    }
    cout << endl;
}

int main() {
    int n = 4; // You can change this value for larger/smaller patterns
    
    numberSquare(n);
    starSquare(n);
    characterSquare(n);
    continuousNumberSquare(n);
    
    return 0;
}