/*
Platform :- Codeforces
Contest :- Codeforces Round 702 Div 3
Problem :- B - Balanced Remainders
*/

#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int,int>P,pair<int,int>Q){
    return P.second<Q.second;
}

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        long int A[n];
        long int tot=0;
        map<long int,int>P;
        for(int i=0;i<n;++i){
            cin>>A[i];
            P[A[i]%3]++; 
        }
        
        int temp=n/3;
        int z=P[0];
        int z2=P[1];
        int z3=P[2];
        
        if(z==z2 && z2==z3){
            cout<<0<<endl;
            continue;
        }
        else{
            vector<pair<int,int>>Q;
            Q.push_back({0,z});
            Q.push_back({1,z2});
            Q.push_back({2,z3});
            sort(Q.begin(),Q.end(),comp);
            
            int temp1=temp-Q[0].second;
            int temp2=Q[2].second-temp;
            if((temp1>=temp2)){
                  if((Q[0].first ==0 || Q[0].first==1) &&(Q[2].first==0 || Q[2].first==1)){
                      if((Q[0].first==0 && Q[2].first==1)){
                          tot+=temp2*2;
                          temp1-=temp2;
                          if(temp1){
                              tot+=temp1;
                          }
                      }
                      else{
                          tot+=temp2;
                          temp1-=temp2;
                          if(temp1){
                              tot+=temp1*2;
                          }
                      }
                  }
                  else if((Q[0].first ==0 || Q[0].first==2) &&(Q[2].first==0 || Q[2].first==2)){
                      if((Q[0].first==0 && Q[2].first==2)){
                          tot+=temp2;
                          temp1-=temp2;
                          if(temp1){
                              tot+=temp1*2;
                          }
                      }
                      else{
                          tot+=temp2*2;
                          temp1-=temp2;
                          if(temp1){
                              tot+=temp1;
                          }
                      }
                  }
                  else{
                      if((Q[0].first==2 && Q[2].first==1)){
                          tot+=temp2;
                          temp1-=temp2;
                          if(temp1){
                              tot+=temp1*2;
                          }
                      }
                      else{
                          tot+=temp2*2;
                          temp1-=temp2;
                          if(temp1){
                              tot+=temp1;
                          }
                      }
                  }
            }
            else{
                
                if((Q[0].first ==0 || Q[0].first==1) &&(Q[2].first==0 || Q[2].first==1)){
                      if((Q[0].first==0 && Q[2].first==1)){
                          tot+=temp1*2;
                          temp2-=temp1;
                          if(temp2){
                              tot+=temp2;
                          }
                      }
                      else{
                          tot+=temp1;
                          temp2-=temp1;
                          if(temp2){
                              tot+=temp2*2;
                          }
                      }
                  }
                  else if((Q[0].first ==0 || Q[0].first==2) &&(Q[2].first==0 || Q[2].first==2)){
                      if((Q[0].first==0 && Q[2].first==2)){
                          tot+=temp1;
                          temp2-=temp1;
                          if(temp2){
                              tot+=temp2*2;
                          }
                      }
                      else{
                          tot+=temp1*2;
                          temp2-=temp1;
                          if(temp2){
                              tot+=temp2;
                          }
                      }
                  }
                  else{
                      if((Q[0].first==2 && Q[2].first==1)){
                          tot+=temp1;
                          temp2-=temp1;
                          if(temp2){
                              tot+=temp2*2;
                          }
                      }
                      else{
                          tot+=temp1*2;
                          temp2-=temp1;
                          if(temp2){
                              tot+=temp2;
                          }
                      }
                  }
            }
        }
        cout<<tot<<endl;
    }
}
