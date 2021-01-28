/*
Platform :- e-Olymp
Contest :- 2020 USACO february Bronze
Problem :- Triangles
Hint :- We are focusing on right angled triangles only so find the points forming right triangles
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    map<int,int>R,Q;
    vector<pair<int,int>>P;
    for(int i=0;i<n;++i){
        int x,y;
        cin>>x>>y;
        
       P.push_back({x,y});
       R[x]++;
       Q[y]++;
    }
    
    
    long int tot=0;
    for(int i=0;i<n;++i){
         int mx1=0,mx2=0;
        if((Q[P[i].second]>=2) && (R[P[i].first]>=2)){
            
        for(int j=0;j<n;++j){
            if(i==j)continue;
            if(P[j].first==P[i].first){
                mx1=max(mx1,abs(P[i].second-P[j].second));
            }
            
            if(P[i].second==P[j].second){
                mx2=max(mx2,abs(P[i].first-P[j].first));
            }
        }
        long int temp=(mx1)*mx2;
        tot=max(tot,temp);
        
        }
    }
    cout<<tot<<endl;
}
