#include<bits/stdc++.h>
using namespace std;
void print(){
     char num=65;
       for(int i=1;i<=5;i++){
        //printing alphabets
        for(int j=1;j<=i;j++){
            cout<<num;
           
        }
        cout<<endl;
         num++;
       }
}
int main(){
    print();
    return 0;
}