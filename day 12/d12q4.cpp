#include<bits/stdc++.h>
using namespace std;
int perfect(int n){
    int x=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            cout<<i<<" ";
            x=x+i;
        }
    }
    cout<<endl<<"sum of digits is:"<<x<<endl;
    if(x==n){
        cout<<"perfect number";
    }
    else{
        cout<<"not perfect number";
    }
    return 0;
}
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    perfect(n);
    return 0;
}