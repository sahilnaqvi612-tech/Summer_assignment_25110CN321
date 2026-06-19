#include<bits/stdc++.h>
using namespace std;
void print(){
     for(int i=1;i<=5;i++){
        //space
        for(int j=1;j<=5-i;j++){
            cout<<" ";
        }
        //numbers
        for(int k=1;k<=i;k++){
            cout<<k;
        }
        // reverse numbers
        for(int j=i-1;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }

}
int main(){
    print();
    return 0;
}