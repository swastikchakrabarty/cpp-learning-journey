// #include <iostream>
// #include <vector>
// #include <algorithm>

#include <bits/stdc++.h>

using namespace std;

void decimalToBinary(int n) {
    // Edge case for zero
    if (n == 0) {
        cout << "Binary: 0" << endl;
        return;
    }

    vector<int> binaryNum;
    
    while (n > 0) {
        // Store remainder (0 or 1) in the vector
        binaryNum.push_back(n % 2);
        
        // Divide n by 2
        n = n / 2;
    }

    // Print the vector in reverse order to get the correct binary
    cout << "Binary: ";
    for (int i = binaryNum.size() - 1; i >= 0; i--) {
        cout << binaryNum[i];
    }
    cout << endl;
}

int main() {
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;

    decimalToBinary(decimal);

    return 0;
}



//In a contest (like ICPC or on LeetCode), you can also use the bitwise AND operator and right-shift to extract bits, which is often faster than the division/modulo method:


// for (int i = 31; i >= 0; i--) {
//     int k = n >> i;
//     if (k & 1) cout << "1";
//     else cout << "0";
// }

// Note: This will print a fixed 32-bit representation, which may include leading zeros. You can modify it to skip leading zeros if desired.