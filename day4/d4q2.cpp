#include<bits/stdc++.h>
using namespace std;
int f(int);
int f(int n){
    int last,slast;
    if(n<=1)
    return n;
else
last=f(n-1);
slast=f(n-2);
return last+slast;
}
int main(){
    int n;
    cout<<"enter the term u want to find:";
    cin>>n;
    cout<<f(n);
    return 0;

}