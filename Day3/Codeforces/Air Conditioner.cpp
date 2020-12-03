/*  
  Platform :- Codeforces
  Contest :- Codeforces Round 620 Div 2
  Problem :- C
  Name of Problem :- Air Conditioner
  */

#include<bits/stdc++.h>
using namespace std;

bool compare(vector<long int>P,vector<long int>Q) {
    return P[0]<Q[0];
}


int main(){
    int q;
    cin>>q;
    while(q--){
        
        int n;
        long int m;
        cin>>n>>m;
        
        vector<vector<long int>>P;
        for(int i=0;i<n;++i){
            vector<long int> Q(3);
            cin>>Q[0]>>Q[1]>>Q[2];
            
            P.push_back(Q);
           
        }
        
       sort(P.begin(),P.end(),compare);
        
        long int start=m,end=m,temp=0;
        int f=0;
        for(int i=0;i<n;++i)
        {
            start-=P[i][0]-temp;
            end+=P[i][0]-temp;
            if((start<=P[i][2]) && end>=P[i][1]){
                start=max(start,P[i][1]);
                end=min(end,P[i][2]);
                temp=P[i][0];
            }
            else{
                f=1;break;
            }
        }
        
        if(f)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        
        
    }
}
