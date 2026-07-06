#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int A[n];

    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++) {
        cin >> A[i];
    }

    cout << "Duplicate elements are: ";

    bool found = false;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(A[i] == A[j]) {
                cout << A[i] << " ";
                found = true;
                break;   // Prevents printing the same duplicate multiple times
            }
        }
    }

    if(!found)
        cout << "No duplicate elements.";

    return 0;
}