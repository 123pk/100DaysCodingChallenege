/*
Platform :- Codeforces
Problem :- B-Strange List
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        long int x;
        cin>>n>>x;
        
        vector<pair<long int,long int>>P(n);
        for(int i=0;i<n;++i){
            long int xx;
            cin>>xx;
            P[i].first=xx;
            P[i].second=1;
        }
        
        long long z=0;
        for(int i=0;i<P.size();++i){
            if(P[i].first%x){
                break;
            }
            long int temp=P[i].first/x;
            long int temp2=P[i].second*x;
            P.push_back(make_pair(temp,temp2));
        }
        
        for(int i=0;i<P.size();++i){
            z+=P[i].first*P[i].second;
        }
        cout<<z<<endl;
    }
}
