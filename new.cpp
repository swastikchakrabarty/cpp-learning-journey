#include <bits/stdc++.h>
using namespace std;

void solve() {
    // Write your logic here
    int a, b;
    if (cin >> a >> b) {
        cout << a + b << "\n";
    }
}

int main() {
    // --- FAST I/O START ---
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // --- FAST I/O END ---

    #ifndef ONLINE_JUDGE
        // Redirecting input and output to files locally
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    solve();

    return 0;
}