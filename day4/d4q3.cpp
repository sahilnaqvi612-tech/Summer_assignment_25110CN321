#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    int ld;
      int arm=0;
      int orgnum=n;
      int temp=n;
      int cnt=0;
    while(temp>0){
        cnt+=1;
        temp=temp/10;
    }
    temp=n;

    while(temp>0){
         ld=temp%10;
         arm +=pow(ld,cnt);
         temp=temp/10;
    }
    if(orgnum==arm){
    cout<<"armstrong";
    }
    else{
        cout<<"not an armstrong number";
    }
}