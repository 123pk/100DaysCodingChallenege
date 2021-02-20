/*
Platform :- Atcoder 
Contest :- Atcoder Beginer Contest 192
Problem :- C - Kaprekar Number
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    long int n;
    int k;
    cin>>n>>k;
    long long A[k+1];
    A[0]=n;
    int c=1;
    
    while(c<=k){
        
           string temp=to_string(A[c-1]);
           sort(temp.begin(),temp.end());
           long long z=0;
           for(int i=1;i<=temp.size();++i){
               if(i==1){
                   z+=(temp[i-1]-'0');
               }
               else{
                   z=z*10+(temp[i-1]-'0');
               }
           }
           
           reverse(temp.begin(),temp.end());
           long long z2=0;
           for(int i=1;i<=temp.size();++i){
               if(i==1){
                   z2+=(temp[i-1]-'0');
               }
               else{
                   z2=z2*10+(temp[i-1]-'0');
               }
           }
           
           A[c]=abs(z2-z);
           //cout<<A[c]<<" ";
       c++;
    }
    cout<<A[k]<<endl;
}
