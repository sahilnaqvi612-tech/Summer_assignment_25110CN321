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
    int keyelement;
    cout<<"\nenter the element whose frequency you want";
    cin>>keyelement;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(A[i]==keyelement){
            cnt++;
        }
    }
    cout<<"frequency of keyelement"<<cnt;
return 0;
}