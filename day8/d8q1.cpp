#include<bits/stdc++.h>
using namespace std;
void print(int n){
    for(int i=1;i<=n;i++){
        //space
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        //star
        for(int k=1;k<=(2*i)-1;k++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"enter the  number of rows u want in pattern:!";
    cin>>n;
    print(n);
    return 0;
}