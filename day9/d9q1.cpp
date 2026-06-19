#include<bits/stdc++.h>
using namespace std;
void print(){
     for(int i=1;i<=5;i++){
        //printing stars
        for(int j=1;j<=6-i;j++){
            cout<<"*";
        }
        cout<<endl;
     }
}
int main(){
    print();
    return 0;
}