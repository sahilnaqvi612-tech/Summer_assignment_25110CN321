#include<bits/stdc++.h>
using namespace std;
void print(){
    for(int i=1;i<=5;i++){
        //printing space
        for(int k=1;k<=5-i;k++){
            cout<<" ";
        }
        //printing stars
        for(int j=1;j<=(2*i)-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    print();
    return 0;
}