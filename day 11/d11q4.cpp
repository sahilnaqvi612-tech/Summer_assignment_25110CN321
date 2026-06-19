#include<bits/stdc++.h>
using namespace std;
int fact(int n){
   if(n==0||n==1)
   return 1;
   else return n*fact(n-1);
}
int main(){
    int a;
    cout<<"enter the number";
    cin>>a;
    cout<<"factorial of entered number is:"<<fact(a);
    return 0;
}