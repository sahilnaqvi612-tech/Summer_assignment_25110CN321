#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of first array: ";
    cin >> n;

    int A[n];
    cout << "Enter the elements of first array: ";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    int m;
    cout << "Enter the size of second array: ";
    cin >> m;

    int B[m];
    cout << "Enter the elements of second array: ";
    for (int i = 0; i < m; i++) {
        cin >> B[i];
    }

    sort(A, A + n);
    sort(B, B + m);

    cout << "Common elements: ";

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (A[i] == B[j]) {
                cout << A[i] << " ";
                B[j] = INT_MIN;   
                break;
            }
        }
    }

    return 0;
}