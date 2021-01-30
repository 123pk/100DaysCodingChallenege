/*
Platform :- Codechef
Contest :- ICPC practise contest
Problem :- TRAINSET
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       map<string,pair<int,int>>P;
       vector<pair<string,int>>Q;
       set<string>R;
       for(int i=0;i<n;++i){
           string s;int x;
           cin>>s>>x;
           R.insert(s);
           Q.push_back({s,x});
       }
       
       for(auto x:R){
           P[x].first=0;
           P[x].second=0;
       }
       
       int an=0;
       for(int i=0;i<n;++i){
           if(Q[i].second){
               P[Q[i].first].first++;
           }
           else{
               P[Q[i].first].second++;
           }
       }
       
       for(auto x:P){
           an+=max(x.second.first,x.second.second);
       }
       cout<<an<<endl;
       
       
    }
}
