#include <bits/stdc++.h>
using namespace std;

int main() {
    long long x;
    cin >> x;

    if (x < 0) {
        cout << "false";
        return 0;
    }

    long long original = x;
    long long reversed = 0;

    while (x > 0) {
        int digit = x % 10;
        reversed = reversed * 10 + digit;
        x /= 10;
    }

    cout << (original == reversed ? "true" : "false");

    return 0;
}