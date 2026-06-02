#include<bits/stdc++.h>
using namespace std;
int gcd(int,int);
int main(){
    int x,y;
    cout<<"enter two numbers";
    cin>>x>>y;
     cout<< "gcd"<<gcd(x,y);
     return 0;
}
int gcd(int a ,int b ){
    while(a>0 && b>0){
        if(a>b)
            a=a%b;
        
        else
            b=b%a;
    }
        if(a==0)
            return b;
        
        else
            return a;
        
    
}