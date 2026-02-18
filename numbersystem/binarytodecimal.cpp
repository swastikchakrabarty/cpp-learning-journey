// #include <iostream>
// #include <cmath> // Required for pow() function

#include <bits/stdc++.h>

using namespace std;

int binaryToDecimal(long long n) {
    int decimalNumber = 0, i = 0, remainder;

    while (n != 0) {
        // Extract the last digit (0 or 1)
        remainder = n % 10;
        
        // Remove the last digit from the binary number
        n /= 10;
        
        // Add (digit * 2^i) to the result
        decimalNumber += remainder * pow(2, i);
        
        // Increment the power
        ++i;
    }
    return decimalNumber;
}

int main() {
    long long binary;
    cout << "Enter a binary number: ";
    cin >> binary;
    
    cout << binary << " in binary = " << binaryToDecimal(binary) << " in decimal" << endl;
    
    return 0;
}