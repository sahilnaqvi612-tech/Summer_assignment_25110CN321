#include<bits/stdc++.h>
using namespace std;
void print(){
    
      for(int i=1;i<=5;i++){
        //printing alphabets
            char num =65;
        for(int j=1;j<=i;j++){
          cout<<num<<" ";
          num++;
        }
        cout<<endl;
      }
}
int main(){
    print();
}