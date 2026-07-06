#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array";
    cin>>n;
      int A[n];
       int sum=0;
    
    cout<<"enter the elements of array";
    for(int i=0;i<n;i++){
        cin>>A[i];
          sum=sum+A[i];     
    }
    cout<<"ur array is:";
      for(int i=0;i<n;i++){
         cout<<A[i]<<" ";
         
    }
    cout<<"\n"<<"sum of the elements of ur arrays is:"<<sum;
    int avg;
    avg=(int)(sum/n);
    cout<<"\n"<<"average of the elements of array is:"<<avg;
    return 0;  
}