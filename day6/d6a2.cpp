#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the binary number :";
    cin>>n;
    int power=0;
    int decimal=0;
    
    while(n>0){
        int ld=n%10;
        decimal=decimal+ld*pow(2,power);
        power++;
        n=n/10;
    }
   
    cout<<"decimal is"<<decimal;
    
}