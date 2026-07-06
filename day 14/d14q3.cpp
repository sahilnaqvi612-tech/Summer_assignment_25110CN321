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
    sort(A,A+n);
    int second_large=A[0];

    cout<<"second largest element of array is:"<<A[n-2];
    
    return 0;  
}