#include<bits/stdc++.h>
using namespace std;
void fibo(int n){
    int a=0;
    int b=1;
    int next;
    for(int i=0;i<n;i++){
        cout<<a<<" ";
        next=a+b;
        a=b;
        b=next;
    } 
}
int main(){
    int n;
    cout<<"enter the number of terms u want in series:";
    cin>>n;
    fibo(n);
    return 0;
}