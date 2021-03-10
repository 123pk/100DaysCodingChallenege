/*
Platform :- Codeforces
Problem :- C - Diamond Miner
Contest :- Codeforces Round 706 #Div 2
*/

#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

bool comp(pair<long long,long long>P,pair<long long,long long>Q){
    return P.second<Q.second;
}

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        vector<pair<long long,long long>>P,Q;
        for(int i=0;i<2*n;++i){
            long long x,y;
            cin>>x>>y;
            
            if(x==0){
                P.push_back({y,y*y});
            }
            else{
                Q.push_back({x,x*x});
            }
        }
        
        sort(P.begin(),P.end(),comp);
        sort(Q.begin(),Q.end(),comp);
        
        double ans=0;
        for(int i=0;i<n;++i){
            double temp=double(P[i].second+Q[i].second);
            temp=sqrt(temp);
            ans+=temp;
        }
       
       cout<<setprecision(15)<<fixed<<ans<<endl;
    }
}
