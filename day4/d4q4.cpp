#include<bits/stdc++.h> 
using namespace std;
int main(){
    int a,b;
    
    int ld;
    cout<<"enter the range:";
    cin>>a>>b;
    //counting digits
    for(int m=a;m<=b;m++)
{ int temp=m;
 int digit=0;
    int arm=0;
    while(temp>0){
        
        digit++;
         temp=temp/10;
    }
     temp=m;
    while(temp>0){
    ld=temp%10;
    temp=temp/10;
    arm+=pow(ld,digit);
    }
    if(arm==m){
        cout<<m<<" ";
    }}
    return 0;
}