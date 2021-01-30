/*
Platform :- Codechef
Contest :- ICPC training contest
Problem :- DISCSHOP
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        vector<string>P;
        string temp=s;
        int n=s.size();
        for(int i=0;i<n;++i){
            string z=s;
            z.erase(z.begin()+(i));
            P.push_back(z);
        }
    
        long long mx=1e10;
         for(int i=0;i<P.size();++i){
            if(P[i][0]=='0'){
                while(1){
                    if(P[i][0]=='0'){
                        P[i].erase(P[i].begin());
                    }
                    else break;
                }
                if(P[i].size()){
                long long ans=stoi(P[i] );
                mx=min(ans,mx);
                }
                else{
                    mx=0;break;
                }
                
            }
            else{
                long long ans=stoi(P[i] );
                mx=min(ans,mx);
                
            }
        } 
        cout<<mx<<endl;
    }
}
