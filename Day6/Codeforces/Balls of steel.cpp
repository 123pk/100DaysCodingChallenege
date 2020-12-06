/*
Platform :- Codeforces
Question :- Balls of steel
Approach :- We need to find a point that is at manhattan distance <=k from all points .
            The catch of question was we can't have more that one operations performed 
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long int k;
        cin>>k;
        
        vector<pair<int ,int>>P;
        for(int i=0;i<n;++i){
            int x,y;
            cin>>x>>y;
            P.push_back(make_pair(x,y));
        }
        
        int ans=-1;
        for(int i=0;i<n;++i){
            int f=0;
            for(int j=0;j<i;++j){
                int temp=abs(P[i].first-P[j].first) + abs(P[i].second-P[j].second);
                if(temp>k){
                    f=1;
                    break;
                }
            }
            
            for(int j=i+1;j<n;++j){
                int temp=abs(P[i].first-P[j].first) + abs(P[i].second-P[j].second);
                if(temp>k){
                    f=1;
                    break;
                }
            }
            if(f==0){
                ans=1;
                break;
            }
        }
        cout<<ans<<endl;
        
    }
}
