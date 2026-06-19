#include<bits/stdc++.h>
using namespace std;
int maximum(int a,int b){
    int c=max(a,b);
    return c;
}
int main(){
    int x,y;
    cout<<"enter the numbers:";
    cin>>x>>y;
    cout<<"the maximum number among these numbers is:"<<maximum(x,y);
    return 0;
}