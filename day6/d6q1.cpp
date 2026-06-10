#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int x=0;
    cout<<"enter the number:";
    cin>>n;
    int binary=0;
    int place=1;
   while(n>0)
    {
        x=n%2;
        binary=binary +x*place;
        place=place*10;
        n=n/2; 
         
    }
 cout<<binary; 
}
