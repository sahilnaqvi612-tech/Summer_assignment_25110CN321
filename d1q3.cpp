#include<bits/stdc++.h>
using namespace std;
int factorial(int);
int main(){
    int a;
    cout<<"enter the number";
    cin>>a;
    factorial(a);
    return 0;
}
 int factorial(int n){
    int fact =1;
  
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
  
  cout<<"factorial of number is:" <<fact;
 }