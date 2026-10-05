#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<long long> answer(n, 1);

    long long prefix = 1;

    for (int i = 0; i < n; i++) {
        answer[i] = prefix;
        prefix *= nums[i];
    }

    long long suffix = 1;

    for (int i = n - 1; i >= 0; i--) {
        answer[i] *= suffix;
        suffix *= nums[i];
    }

    for (int i = 0; i < n; i++) {
        if (i > 0) cout << " ";
        cout << answer[i];
    }

    return 0;
}