#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    int ld;
    int sum=0;
    while (n>0){
    ld=n%10;
    n=n/10;
    sum=sum +ld;
    }
cout<<sum;
}