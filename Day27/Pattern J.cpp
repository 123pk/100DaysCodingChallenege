/*
Platform :- Codechef
Problem :- Pattern J
Approach :- Analyse and bruteforce

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        int temp=(n*(n+1))/2;
        int j=1;
        for(int i=1;i<=n;++i){
            
            vector<int> s;
            for(int k=1;k<=i;++k){
                s.push_back(j);
                j++;
            }
            for(int j=s.size()-1;j>=0;--j)cout<<s[j];
            cout<<endl;
        }
    }
}
