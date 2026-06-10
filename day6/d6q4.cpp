#include <bits/stdc++.h>
using namespace std;

long long power(int x, int n) {
    long long ans = 1;

    for (int i = 0; i < n; i++) {
        ans *= x;
    }

    return ans;
}

int main() {
    int x, n;
    cin >> x >> n;

    cout << power(x, n);
    return 0;
}