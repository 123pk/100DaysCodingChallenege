/*
  Question code :- 887A
  Platform :- Codeforces
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    
    //1st binary string divisible by 6 is 1000000
    //we will check if there are six zero followed by 1
    
    
    int f=0,c=0;
    for(auto x:s){
        if(f){
            if(x=='0')c++;
        }
        else{
            if(x=='1')f=1;
        }
    }
    
    if(f){
        if(c>=6)cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    else{                       // if there is no 1 then it is not possible as we need positive values
        cout<<"no"<<endl;
    }
}
