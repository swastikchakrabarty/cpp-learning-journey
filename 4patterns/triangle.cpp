#include <iostream>
using namespace std;

// 1. Star Triangle: Each row prints 'i+1' stars
void starTriangle(int n) {
    cout << "--- Star Triangle ---" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
}

// 2. Row-Number Triangle: Prints the current row number
void rowNumberTriangle(int n) {
    cout << "--- Row-Number Triangle ---" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            cout << (i + 1) << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// 3. Increasing Number Triangle: Prints numbers 1 to row index
void increasingNumberTriangle(int n) {
    cout << "--- Increasing Number Triangle ---" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= i + 1; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// 4. Reverse Number Triangle: Counts down from row index to 1
void reverseNumberTriangle(int n) {
    cout << "--- Reverse Number Triangle ---" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j > 0; j--) {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// 5. Floyd’s Triangle: Numbers increment across all rows
void floydsTriangle(int n) {
    cout << "--- Floyd's Triangle ---" << endl;
    int num = 1; // Declared outside inner loop to persist
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            cout << num << " ";
            num++; 
        }
        cout << endl;
    }
    cout << endl;
}

int main() {
    int n = 4; // Standard size for practice
    
    starTriangle(n);
    rowNumberTriangle(n);
    increasingNumberTriangle(n);
    reverseNumberTriangle(n);
    floydsTriangle(n);
    
    return 0;
}
