/*
Platform :- Topcoder
Problem :- Paired Multiple
*/

#include <bits/stdc++.h>

using namespace std;

class  PairedMultiples{
    public:
    int selectedTotal(vector <int> A, int c){
         map<int,int>P;
         vector<pair<int,int>>Q;
         vector<int>R;
         //int e=0;
         for(int i=0;i<A.size();++i){
             if((A[i]%c)!=0){
                 Q.push_back({A[i],A[i]%c});
    
                P[A[i]%c]++; 
             }
             else{
                 //cout<<A[i]<<" $ \n";
                 Q.push_back({A[i],0});
                 R.push_back(A[i]);
             }
             
         }
         int d=0;
         
         for(int i=0;i<Q.size();++i){
             if(Q[i].second){
             int temp=c-Q[i].second;
             if(temp){
                 if(P[temp] && P[Q[i].second]){
                     d+=Q[i].first;
                     
                 }
             }
             }
         }
         
         if(R.size()>1){
            //cout<<" $ ";
         for(auto x:R){
             d+=x;
         }
         }
         return d;
     }
};
