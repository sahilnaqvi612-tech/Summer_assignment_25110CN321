#include<bits/stdc++.h>
using namespace std;
int fibonacci(int n){
    int a=0;
    int b=1;
    int next;
    for(int i=0;i<n;i++){
    cout<<a<<" ";
    next =a+b;
    a=b;
    b=next;
    }
    return 0;
}
int main(){
    int n;
    cout<<"enter the number of terms u want in series";
    cin>>n;
    fibonacci(n);
    return 0;
}