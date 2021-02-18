/*
Platform :- Codechef
Event :- February long 2021
Problem :- Frog sort (FROGS)


SOLUTION WILL BE ADDED ONCE CONTEST IS OVER
*/

#include<bits/stdc++.h>
using namespace std;

bool comp(pair<pair<int,int>,int>P,pair<pair<int,int>,int>Q){
    if(P.second==Q.second){
        return P.first.second>Q.first.second;
    }
    return P.second< Q.second;
}

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        int A[n],B[n];
        vector<pair<pair<int,int>,int>>P;
        for(int i=0;i<n;++i){
            cin>>A[i];
        }
        
        for(int i=0;i<n;++i){
            cin>>B[i];
            P.push_back({{B[i],A[i]},i+1});
        }
        
        int tot=0;
        while(1){
            int f=0;
            
            sort(P.begin(),P.end(),comp);
            
            for(int i=1;i<P.size();++i){
                if(P[i].first.second<P[i-1].first.second)
                {
                    f=1;
                        int temp=P[i].second-P[i-1].second;
                        temp/=P[i-1].first.first;
                        temp++;
                       P[i-1].second+=(temp*P[i-1].first.first);
                       tot+=temp;
                  
                    
                }
                else if((P[i].second==P[i-1].second)){
                     if(P[i].first.first<P[i-1].first.first){
                            P[i].second+=P[i].first.first;
                            tot++;
                        }
                        else if(P[i].first.first>P[i-1].first.first){
                            P[i-1].second+=P[i-1].first.first;
                            tot++;
                        }
                        else{
                             P[i].second+=P[i].first.first;
                             tot++;
                        }
                }
            }
             
            if(f==0)break;
        }
        
        cout<<tot<<endl;
    }
}
