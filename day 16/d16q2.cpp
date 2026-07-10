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
 
    
    int maxcnt=0;
    for(int i=0;i<n;i++){
          int cnt=1;
        for(int j=i+1;j<n;j++){
      
            if(A[i]==A[j]){
            cnt++;
            }
        }
        if(cnt>maxcnt){
            maxcnt=cnt;
        }

    }
    cout<<"max freq "<<maxcnt;

   return 0;
}