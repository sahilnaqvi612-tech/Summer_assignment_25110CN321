#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    int ld;
    int prod=1;
    while(n>0){
         ld=n%10;
        n=n/10;
        prod=prod*ld;
    }
      cout<<"product of the digits is: "<<prod;
}