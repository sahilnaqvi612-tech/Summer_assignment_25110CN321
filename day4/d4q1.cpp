#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=0;int b=1;
    int next,n;
    cout<<"enter the number of terms do you want in series:";
    cin>>n;
    for(int i=0;i<=n;i++){
     cout<<a<<" ";
     next=a+b;
     a=b;
     b=next;
    }
   return 0; 
}