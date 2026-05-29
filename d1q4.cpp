#include<bits/stdc++.h>
using namespace std;
int countdigit (int);
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    countdigit(n);
    return 0;
}
int  countdigit(int a){
    int s=0;
    while(a>0){
        int ld=a%10;
        //a=a/10;
        s+=1;
    }
    cout<<"number of digits is: "<<s;
}