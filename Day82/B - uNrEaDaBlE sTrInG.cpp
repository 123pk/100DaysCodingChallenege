/*
Platform :- Atcoder
Contest :- Atcoder Beginner Contest 192
Problem :- B - uNrEaDaBlE sTrInG
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int f=0;
    for(int i=0;i<s.size();i+=2){
        if('a'<=s[i]&&s[i]<='z'){
            continue;
        }
        else{
            f=1;break;
        }
    }
    
    if(f)cout<<"No"<<endl;
    else {
        for(int i=1;i<s.size();i+=2){
        if('A'<=s[i]&&s[i]<='Z'){
            continue;
        }
        else{
            f=1;break;
        }
    }
    
    if(f)cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
    }
}
