/*
Platform:- Codechef
Problem  :- Help Santa
Approach :- count unique boxes and add n - total input that you got .


#include<bits/stdc++.h>
using namespace std;

int main(){
     
        int n;
        cin>>n;
        
        vector<long int>Q;
        long int x;
        while(cin>>x){
            Q.push_back(x);
        }
        int z=n-Q.size();
        set<long int>P;
        for(auto x:Q)P.insert(x);
        for(int i=1;i<=P.size();++i)cout<<i<<" ";
        int s=P.size();
        for(int i=1;i<=z;++i){
            cout<<(s+i)<<" ";
        }
        cout<<endl;
    
}
