#include<bits/stdc++.h>
using namespace std;
int sum(int n){
    int ld;
    int sum=0;
    while(n>0){
    ld=n%10;
    sum=sum+ld;
    n=n/10;
    }
    return sum;
}
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    cout<<"sum of the digits of entered number is: "<<sum(n);
    return 0;
}