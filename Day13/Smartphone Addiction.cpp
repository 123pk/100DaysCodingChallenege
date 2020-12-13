/*
Platform :- Atcoder
Problem :- Smartphone Addiction
Approach :- apply brute force approach and one thing to notice is as soon as battery become 0 break out of loop and print No else Yes

*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    
    long long n,m,t;
    cin>>n>>m>>t;
    
    vector<pair<long long,long long>>P;
    for(int i=0;i<m;++i){
        long long x,y;
        cin>>x>>y;
        P.push_back(make_pair(x,y));
    }
    long int end=0;
    long long z=n;
    for(int i=0;i<m;++i){
        if(i==0){
            if(P[i].first<n){
                n-=P[i].first;
                long long temp=n+(P[i].second-P[i].first);
                n=min(z,temp);
                
            }
            else{
                n=0;
                break;
                long long temp=n+(P[i].second-P[i].first);
                n=min(z,temp);
            }
            end=P[i].second;
        }
        else{
           if((P[i].first-end)<n){
                n=max(0LL,n-(P[i].first-end));
                long long temp=n+(P[i].second-P[i].first);
                n=min(z,temp);
                
            }
            else{
                n=0;
                break;
                long long temp=n+(P[i].second-P[i].first);
                n=min(z,temp);
            }
            end=P[i].second;
        }
       
    }
    
    n=max(0LL,n-(t-end)); //cout<<n<<"% ";
    if(n<=0)cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
}
