/*
Platform :- Interviewbit
Contest :- Codenation Innovation Labs Hiring Contest
Problem :- Bit Queries 
Approach :- Observation 1: If any bit is set in >= 2 numbers in the range, answer is 0. 
            So we can compute prefix frequencies for each bit. Observation 2: Answer will atmost be 2 because we can make the last bit 1
            (having two odd integers in the range is sufficient).
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,q;
    cin>>n>>q;
    
    vector<int>A(n);
    vector<vector<int>>Q;
    vector<int>B(32);
    for(int i=0;i<n;++i){
        cin>>A[i];
        
        string temp=bitset<32>(A[i]).to_string();
        reverse(temp.begin(),temp.end());
        
        for(int j=0;j<32;++j){
            if(temp[j]=='1'){
                B[j]++;
            }
        }
        Q.push_back(B);
        
    }
    
 
    vector<int>ans(q);
    for(int i=0;i<q;++i){
        int l,r;
        cin>>l>>r;
        
        if(l==0){
            int f=0;
            vector<int> Z = Q[r];
            for(auto x:Z){
                if(x>=2){
                    f=1;break;
                }
            }
            
            if(f)ans[i]=0;
            else {
                if(Z[0]){
                    ans[i]=1;
                }
                else{
                    ans[i]=2;
                }
            }
        }
        else{
            int f=0;
            vector<int>Z1 = Q[r];
            vector<int>Z2 = Q[l-1];
            vector<int>Z3(32);
            for(int j=0;j<32;++j){
                Z3[j] = Z1[j] - Z2[j];
                if(Z3[j]>=2){
                    f=1;break;
                }
            }
             
            if(f)ans[i]=0;
            else {
                if(Z3[0]){
                    ans[i]=1;
                }
                else{
                    ans[i]=2;
                }
            }
            
        }
    }
    
    for(auto x:ans){
        cout<<x<<" ";
    }
    cout<<endl;
}
