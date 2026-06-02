#include<bits/stdc++.h>
using namespace std;
int prime(int);
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    prime(n);
    return 0;
}
int prime(int n){
    int cnt =0; 
    for(int i=1;i<=n;i++){
        if((n%i)==0){
            cnt++;
        }
       }
        if(cnt==2){
            cout<<"prime!";
        }
        else{
            cout<<"composite";
        }
    
    return 0;
}