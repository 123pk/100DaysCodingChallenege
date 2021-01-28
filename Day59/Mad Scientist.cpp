/*
Platform:- e-Olymp
Contest :- 2020 USACO February Bronze
Problem :- Mad Sientist
Hint :- Count the number of consecutive substring that are not equal
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
   
    string s,t;
    cin>>s>>t;
     
     int c=0,f=0;
    for(int i=0;i<n;++i){
        if(f){
            if(s[i]==t[i]){
                c++;
                f=0;
            }
            else{
                if(i==n-1){
                    if(f)c++;
                }
            }
        }
        else{
        if(s[i]!=t[i]){
           f=1;   
        }
        }
    }
    
    cout<<c<<endl;
}
