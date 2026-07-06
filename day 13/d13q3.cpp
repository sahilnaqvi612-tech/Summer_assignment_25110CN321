#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array";
    cin>>n;
      int A[n];
    cout<<"enter the elements of array";
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    cout<<"ur array is:";
      for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    int large=A[0];
    for(int i=0;i<n;i++){
        if(A[i]>large){
            large=A[i];
        }
        else{
            continue;
        }
    }
    cout<<"\n"<<"large elem"<<large;
    int small=A[0];
    for(int i=0;i<n;i++){
        if(A[i]<small)
        small=A[i];
    }
    cout<<"\n"<<"smallest element:"<<small;
       return 0;  
}