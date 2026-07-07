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
    cout<<"\n"<<"left rotated array";
    //first element goes to end
    for(int i=0;i<=n-1;i++){
        if(i==n-1){
           swap(A[n-1],A[0]);
            cout<<A[0];
        }
        else{
        swap(A[i],A[i+1]);
        cout<<A[i]<<" ";
        }
    } 
    return 0; 
}
