#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
     int x=0;
     cout<<"factors are:";
    for(int i=1;i<n;i++){
        if(n%i==0){
            cout<<i<<" ";
        x =x+i;
    }}
    cout<<"\n"<<"sum of the digits:"<<x<<endl;
    if(x==n){
        cout<<"perfect number!";
    }
    else{
        cout<<"no!";
    }
    return 0;
}