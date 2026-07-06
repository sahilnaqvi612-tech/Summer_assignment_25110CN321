#include<bits/stdc++.h>
using namespace std;
int armstrong(int n){
    int cnt=0;
    int ld;
    int temp=n;
    while(temp>0){
        ld=temp%10;
        cnt++;
        temp=temp/10;
        }
        int arm=0;
        int m=n;
        while(m>0){
            ld=m%10;
            arm=round(arm+pow(ld,cnt));
            m=m/10;  
             }
             cout<<arm;
    if(arm==n){
        cout<<"armstrong number";
    }
    else{
        cout<<"not";
    }
    return 0;
}
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    armstrong(n);
    return 0;
}