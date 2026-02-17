#include <iostream>
using namespace std;

// 1. Continuous Character Square: A B C / D E F / G H I
void continuousCharacterSquare(int n) {
    cout << "--- 1. Continuous Character Square ---" << endl;
    char ch = 'A'; 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << ch << " ";
            ch++; // Incrementing ASCII value
        }
        cout << endl;
    }
    cout << endl;
}

// 2. Character Triangle: A / B B / C C C
void characterTriangle(int n) {
    cout << "--- 2. Character Triangle ---" << endl;
    for (int i = 0; i < n; i++) {
        char ch = 'A' + i; // Character resets/changes based on row index
        for (int j = 0; j < i + 1; j++) {
            cout << ch << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// 3. Character Floyd’s Triangle: A / B C / D E F
void characterFloydsTriangle(int n) {
    cout << "--- 3. Character Floyd's Triangle ---" << endl;
    char ch = 'A'; 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            cout << ch << " ";
            ch++; 
        }
        cout << endl;
    }
    cout << endl;
}

// 4. Butterfly Pattern: Symmetric wings
void butterflyPattern(int n) {
    cout << "--- 4. Butterfly Pattern ---" << endl;
    // Top Half
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) cout << "*"; // Left wing
        for (int j = 0; j < 2 * (n - i - 1); j++) cout << " "; // Gap
        for (int j = 0; j < i + 1; j++) cout << "*"; // Right wing
        cout << endl;
    }
    // Bottom Half (Reversed outer loop)
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j < i + 1; j++) cout << "*"; 
        for (int j = 0; j < 2 * (n - i - 1); j++) cout << " "; 
        for (int j = 0; j < i + 1; j++) cout << "*"; 
        cout << endl;
    }
}

int main() {
    int n = 4; // Change this to test different sizes
    
    continuousCharacterSquare(n);
    characterTriangle(n);
    characterFloydsTriangle(n);
    butterflyPattern(n);
    
    return 0;
}