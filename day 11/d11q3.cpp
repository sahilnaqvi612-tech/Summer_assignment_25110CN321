#include<bits/stdc++.h>
using namespace std;
void prime(int a){
    int cnt =0;
        for(int i=1;i<=a;i++){
            if(a%i==0){
                cnt++;
            }
        }
    
    if(cnt==2)
    cout<<"prime!";
else
     cout<<"composite";
}
int main(){
    int x;
    cout<<"enter the number";
    cin>>x;
    prime(x);
    return 0;
}
