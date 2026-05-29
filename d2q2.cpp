#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    int ld;
    int revnum=0;
    while(n>0){
         ld=n%10;
        n=n/10;
        revnum=(revnum*10)+ld;
    }
    cout<<revnum;
}