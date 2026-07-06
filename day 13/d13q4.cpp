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
    int cnt=0;
    int bot=0;
    for(int i=0;i<n;i++){
        if(A[i]%2==0){
            cnt++;
        }
        else{
            bot++;
        }
    }
    cout<<"\n"<<"number of even elements in array:"<<cnt;
    cout<<"\n"<<"number of odd elements in array:"<<bot;

    return 0;  
}