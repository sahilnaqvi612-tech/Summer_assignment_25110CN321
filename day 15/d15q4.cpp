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
    int j=0;
    //moves zero to end
    cout<<"\n zero at end:";
    for(int i=0;i<n;i++){
        if(A[i]!=0){
            swap(A[i],A[j]);
            j++;
        }}
      for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    } 

    return 0;
}