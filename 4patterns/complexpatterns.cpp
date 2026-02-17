#include <iostream>
using namespace std;

// 1. Inverted Triangle: Flipped vertically with leading spaces
void invertedTriangle(int n) {
    cout << "--- Inverted Triangle ---" << endl;
    for (int i = 0; i < n; i++) {
        // First inner loop for leading spaces: i spaces
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        // Second inner loop for numbers: n-i numbers
        for (int j = 0; j < n - i; j++) {
            cout << (i + 1);
        }
        cout << endl;
    }
    cout << endl;
}

// 2. Pyramid Pattern: Symmetric increase and decrease
void pyramidPattern(int n) {
    cout << "--- Pyramid Pattern ---" << endl;
    for (int i = 0; i < n; i++) {
        // Loop 1: Leading spaces (n - i - 1)
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        // Loop 2: Increasing numbers (1 to i+1)
        for (int j = 1; j <= i + 1; j++) {
            cout << j;
        }
        // Loop 3: Decreasing numbers (i down to 1)
        for (int j = i; j >= 1; j--) {
            cout << j;
        }
        cout << endl;
    }
    cout << endl;
}

// 3. Hollow Diamond Pattern: Boundary only
void hollowDiamond(int n) {
    cout << "--- Hollow Diamond ---" << endl;
    // Top Part
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) cout << " "; // Spaces
        cout << "*"; // First star
        if (i != 0) {
            for (int j = 0; j < 2 * i - 1; j++) cout << " "; // Inner spaces
            cout << "*"; // Second star
        }
        cout << endl;
    }
    // Bottom Part
    for (int i = n - 2; i >= 0; i--) {
        for (int j = 0; j < n - i - 1; j++) cout << " "; // Spaces
        cout << "*"; // First star
        if (i != 0) {
            for (int j = 0; j < 2 * i - 1; j++) cout << " "; // Inner spaces
            cout << "*"; // Second star
        }
        cout << endl;
    }
}

int main() {
    int n = 4;
    invertedTriangle(n);
    pyramidPattern(n);
    hollowDiamond(n);
    return 0;
}