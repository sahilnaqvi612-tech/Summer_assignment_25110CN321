#include<bits/stdc++.h>
using namespace std;
int pallindrome(int n){
    int ld;
    int revnum=0;
      int orgnum=n;
    while(n>0){
        ld=n%10;
        revnum=(revnum*10)+ld;
        n=n/10;
    }

    if(revnum==orgnum){
        cout<<"pallindrome";
    }
    else{
        cout<<"not pallindrome";
    }
    return 0;
}
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    pallindrome(n);
    return 0;
}