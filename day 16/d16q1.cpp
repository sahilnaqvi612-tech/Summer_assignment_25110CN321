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
    for(int j=A[0];j<A[n-1];j++){

        bool found=false;

    for(int i=0;i<n;i++){

        if(A[i]==j){
            found=true;
            break;
        }
       
    }
    
    if(!found){
        cout<<"\nelement doesn't exist!"<<j;
    }
    }
   return 0; 
}