#include<bits/stdc++.h>
using namespace std;
int reverse(int n){
    int ld;
    int revnum=0;
    while(n>0){
    ld=n%10;
    revnum=revnum*10+ld;
    n=n/10;
    }
    return revnum;
}
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    cout<<"reverse of the entered number is:"<<reverse(n);
    return 0;
}