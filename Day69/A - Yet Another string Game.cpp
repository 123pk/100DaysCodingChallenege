/*
Platform :- Codeforces
Contest :- Codeforces Round 700 # Div 2
Problem :- A - Yet Another String Game
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        
        for(int i=0;i<s.size();++i){
            if(i%2){
                if(s[i]=='z'){
                    s[i]='y';
                }
                else {
                    s[i]='z';
                }
            }
            else{
                if(s[i]=='a'){
                    s[i]='b';
                }
                else s[i]='a';
            }
        }
        cout<<s<<endl;
    }
}
