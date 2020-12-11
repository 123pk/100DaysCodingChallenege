/*
Platform :- Codeforces
Program :- String Generation 
Approach :- make first k element of string as 'a' then from 'k' to 'n' add string 'b' --> 'c'--->'a'
            in this order and you will not have a string whose palindromic substring length is greater than k 

*/
#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin>>t;
   while(t--){
       int n,k;
       cin>>n>>k;
       string temp="bca";
       string ans="";
       for(int i=0;i<k;++i){
           ans+='a';
       }
       int j=0;
       for(int i=k;i<n;++i){
           ans+=temp[(j%3)];
           j++;
       }
       cout<<ans<<endl;
       
   }
}
