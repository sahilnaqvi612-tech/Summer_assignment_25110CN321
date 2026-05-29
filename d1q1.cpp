#include<bits/stdc++.h>
using namespace std;
void printtable(int n);
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    printtable(n);
    return 0;
}
void printtable(int n){
    for(  int i=1;i<=10;i++){
   cout<<n<<"X"<<i<<"="<<n*i<<endl;
    }
}