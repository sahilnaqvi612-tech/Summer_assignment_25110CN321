#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array";
    cin>>n;
    int A[n];
    cout<<"\nEnter the elements of array";
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    cout<<"\nEntered array::";
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    sort(A,A+n);
    cout<<"\narray after removing duplicates";
    for(int i=0;i<n;i++){

        if(i==n-1){
            cout<<A[i];
        continue;}
        if(A[i]!=A[i+1]){
            cout<<A[i]<<" ";
        }
        
    }


    return 0;
}