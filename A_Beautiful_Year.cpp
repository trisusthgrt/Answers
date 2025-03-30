#include <bits/stdc++.h>
using namespace std;

bool solve(int n) {  // Pass n by value to avoid modifying it
    vector<int> v(10, 0); // Digits range from 0-9, so size should be 10
    
    for (int i = 1; i <= 4; i++) {
        if (v[n % 10] != 0) {
            return false; // If digit is already used, return false
        }
        v[n % 10]++; // Mark digit as used
        n = n / 10;  // Remove last digit
    }
    return true; // If all digits are unique, return true
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    int i = n + 1;
    while (!solve(i)) { // Find the next number with all distinct digits
        i++;
    }
    
    cout << i << endl;
    return 0;
}
