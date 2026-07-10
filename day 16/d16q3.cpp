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
    int target;
    cout<<"\nenter the target sum";
    cin>>target;
     bool found=false;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(A[i]+A[j]==target){
                found=true;
            cout<<"\nelement for the given sum found:"<<A[i]<<" "<<A[j];
            
        }
    }
    }
    if(!found){
            cout<<"\ntarget is not possible";
        }
    return 0;
}