/*
Platform :- Codeforces 
Cotest :- Codeforces Round 604 Div 2
Problem :- B - Card Deck
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        long int A[n];
        vector<long int>B;
        for(int i=0;i<n;++i){
            cin>>A[i];
            B.push_back(A[i]);
        }
        
        sort(B.begin(),B.end());
        int j=n-1;
        int i=n-1;
        stack<int>Q;
        for(i=n-1;i>=0;--i){
            if(A[i]==B[B.size()-1]){
                //cout<<" * ";
                cout<<A[i]<<" ";
                B.erase(B.end()-1);
                while(!Q.empty()){
                    cout<<Q.top()<<" ";
                    Q.pop();
                }
            }
            else{
                Q.push(A[i]);
               // cout<<A[i]<<" & "<<endl;
                auto it= lower_bound(B.begin(),B.end(),A[i]);
                B.erase(B.begin()+(it-B.begin()));
            }
            //cout<<B[B.size()-1]<<" && ";
        }
        cout<<endl;
        
    }
}
