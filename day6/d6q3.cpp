#include <bits/stdc++.h>
using namespace std;

int countSetBits(int n) {
    int count = 0;

    while (n > 0) {
        count += (n & 1);  
        n = n >> 1;        
    }

    return count;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Number of set bits = " << countSetBits(n);

    return 0;
}
