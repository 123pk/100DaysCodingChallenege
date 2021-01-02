/*
Platform  :- Atcoder
Question :- C- 1SAT
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    map<string,int>P;
    int f=0;
    vector<string>Q;
    for(int i=0;i<n;++i){
        string z;
        cin>>z;
        if(z[0]=='!'){
            z.erase(z.begin());
            Q.push_back(z);
        }
        else{
            P[z]++;
        }
    }
    
    for(auto x:Q){
        if(P[x]){
            f=1;
            s=x;break;
        }
    }
    
    if(f){
        cout<<s<<endl;
    }
    else{
        cout<<"satisfiable"<<endl;
    }
}
