#include<bits/stdc++.h>
using namespace std;
void print(){
    for(int i=1;i<=5;i++){
        //space
        for(int k=1;k<=i-1;k++){
            cout<<" ";
        }
        //stars
        for(int j=1;j<=10-((2*i)-1);j++){
            cout<<"*";
        }
        cout<<endl;
    }

}
int main(){
    print();
    return 0;
}