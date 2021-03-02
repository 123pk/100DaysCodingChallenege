/*
Platform :- Codeforces
Problem :- A - ABC
Contest :- 
*/

#include<bits/stdc++.h>
using  namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        string s;
        cin>>s;
        
        map<int,int>P;
        int mx=-1;
        for(auto x:s){
            P[x]++;
            mx=max(mx,P[x]);
        }
        
        char ch,ch2;
        int temp1=0,temp2=0,temp3=0;
        int c=0;
        for(auto x:P){
            if(x.second==mx){
                c++;
                ch=x.first;
               break;
            }
        }
        
        stack<char>Q;
        string temp;
        for(int i=0;i<s.size();++i){
            if(s[i]==ch){
                temp+='(';
            }
            else temp+=')';
        }
       // cout<<temp<<" ";
        int f=0;
        for(auto x:temp){
            if(x=='('){
                Q.push(x);
            }
            else{
                if(!Q.empty()){
                    Q.pop();
                }
                else{
                    f=1;break;
                }
            }
        }
        if(!Q.empty()){
            f=1;
        }
        
        if(f){
             stack<char>Q2;
             string temp2;
             int f2=0;
             for(int i=0;i<s.size();++i){
            if(s[i]!=ch){
                temp2+='(';
            }
            else temp2+=')';
        }
       // cout<<temp2<<" ";
       
        for(auto x:temp2){
            if(x=='('){
                Q2.push(x);
            }
            else{
                if(!Q2.empty()){
                    Q2.pop();
                }
                else{
                    f2=1;break;
                }
            }
        }
        if(!Q2.empty()){
            f2=1;
        }
        if(f2)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        } 
        else cout<<"YES"<<endl;
    }
}
