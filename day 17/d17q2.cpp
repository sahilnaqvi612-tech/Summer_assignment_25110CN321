#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of Ist array";
    cin>>n;
    int A[n];
    cout<<"\nenter the elements of first array";
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cout<<"\nEntered array";
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    int m;
    cout<<"\nenter the size of IInd array";
    cin>>m;
    int B[m];
    cout<<"\nenter the elements of second array";
    for(int i=0;i<m;i++){
        cin>>B[i];
    }
    cout<<"\nEntered array";
    for(int i=0;i<m;i++){
        cout<<B[i]<<" ";
    }
    cout<<"\nMerged array";
   int C[n+m];
   for(int i=0;i<n;i++){
    C[i]=A[i];
    cout<<C[i]<<" ";
   }
   for(int i=n;i<n+m;i++){
    C[i]=B[i-n];
    cout<<C[i]<<" ";
   }
   sort(C,C+(n+m));
   cout<<"\nfinal array";
   for(int i=0;i<n+m;i++){
    
    if(i==(n+m)-1){
        cout<<C[i];
        continue;
    }
    
    if(C[i]!=C[i+1]){
        cout<<C[i]<<" ";
    }
   } 
      return 0;
}