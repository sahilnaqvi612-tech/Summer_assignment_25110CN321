#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array";
    cin>>n;
    int A[n];
    cout<<endl<<"Enter the elements of array";
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    cout<<"\n"<<"Entered Array";
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    cout<<"\n"<<"reversed array";
    for(int i=n-1;i>=0;i--){
        cout<<A[i]<<" ";
    }
    return 0;
}