#include<bits/stdc++.h>
using namespace std;
int fact(int);
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    int ld=0;
    int x=0;
    int y=n;
    while(n>0){
        ld=n%10;
        n=n/10;
        cout<<ld<<" "<<fact(ld)<<endl;
        x=x+fact(ld);       
}
 cout<<"sum of factorials"<<x<<endl;
 if(x==y){
    cout<<"strong number!";
}
    else{
        cout<<"no!";
    }
 }
int fact(int n){
    if (n<=1)
    return 1;
return n*fact(n-1);
}