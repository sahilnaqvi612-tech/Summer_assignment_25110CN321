#include<bits/stdc++.h>
using namespace std;
void print(){
    for(int i=1;i<=5;i++){
        char c =65;
        //space
        for(int k=1;k<=5-i;k++){
            cout<<" ";
    } 
               //alphabets
        for(int j=1;j<=i;j++){
            cout<<c;
            c++;
        }
        char v =64;
        //alphabets
        for(int j=i-1;j>=1;j--){
            char x=(v+j);
            cout<<x;
            x--;;
        }
        cout<<endl;
    }
}
int main(){
    print();
    return 0;
}