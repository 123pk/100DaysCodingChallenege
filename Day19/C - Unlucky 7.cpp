/*
Platform :- Atcoder
Problem :- C- Unlucky 7
Approach :- run a loop from 1 to n and check if number has 7 in it in decimal and octal form or not .
*/

#include<bits/stdc++.h>
using namespace std;
bool pk(int decimalNum) {
   string octalNum ;
   int dNo = decimalNum;
   while (decimalNum != 0) {
      octalNum += to_string(decimalNum % 8);
      decimalNum /= 8;
      
   }
   
   for(auto x:octalNum){
       if(x=='7')return true;
   }
   return false;
}

int main(){
    int n;
    cin>>n;
    
    int tot=n;
    for(int i=1;i<=n;++i){
        int f=0;
        string s=to_string(i);
        for(auto x:s){
            if(x=='7'){
            f=1;
            }
        }
            if(pk(i)){
                f=1;
              
            }
            
            if(f)tot--;
    }
    cout<<tot<<endl;
    
}
