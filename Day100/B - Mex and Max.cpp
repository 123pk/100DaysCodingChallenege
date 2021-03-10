/*
Platform :- Codeforces
Problem :- B - Max and Mex
Contest :- Codeforces Round 706 #Div 2
Note :- stay attention in rounding up !!
*/

#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

bool comp(pair<long long,long long>P,pair<long long,long long>Q){
    return P.second<Q.second;
}

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        long long k;
        cin>>n>>k;
        
        long long A[n];
        set<long long>Q;
        for(int i=0;i<n;++i){
            cin>>A[i];
            Q.insert(A[i]);
        }
        
        sort(A,A+n);
        if(k==0){
            cout<<Q.size()<<endl;
            continue;
        }
        if(A[n-1]==n-1){
            cout<<(n+k)<<endl;
        }
        else{
            long long mex=0;
            for(int i=0;i<n;++i){
                if(A[i]!=i){
                    mex=i;break;
                }
            }
            long long temp=mex+A[n-1];
            temp/=2;
            if((A[n-1]+mex)%2)temp++;
            
            if(Q.find(temp)==Q.end()){
                 cout<<(Q.size()+1)<<endl;
            }
            else cout<<(Q.size())<<endl;
        }
    }
}
