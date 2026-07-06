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
    cout<<"\nenter the element you want to search";
    cin>>keyelement;
    bool found;
    for(int i=0;i<n;i++){
        if(A[i]==keyelement){
            cout<<"\n"<<"element found";
            cout<<"\n"<<"index of element is:"<<i;
             found=true;
            break;
        }
       
    }
    if(!found){
        cout<<"not found";
 }
    

    return 0;  
}