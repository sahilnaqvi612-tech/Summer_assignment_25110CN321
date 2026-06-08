#include<bits/stdc++.h>
using namespace std;\
bool isPrime(int n){
    if(n <= 1) return false;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0)
            return false;
    }
    return true;
}
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int largestPrime = -1;
    for(int i = 1; i <= n; i++){
        if(n % i == 0){         
            if(isPrime(i)){     
                largestPrime = i; 
            }
        }
    }
    cout << "Largest prime factor = " << largestPrime;
    return 0;
}