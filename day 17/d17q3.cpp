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
    sort(A,A+n);
    sort(B,B+m);
    cout<<"\nArray after intersection";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(A[i]==B[j]){
                if(i==0||A[i]!=A[i-1]){
                cout<<A[i]<<" ";
                break;
                }
            }
        }
    }
    return 0;
}