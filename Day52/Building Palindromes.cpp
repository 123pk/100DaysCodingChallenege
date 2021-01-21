/*
Platform :- Google Kickstart Round B 2019
Problem :- Building Palindromes
Hint:- frequency of character at each index and for arrangement of string to be palindrome (number of characters having odd occurences must be <= 1)
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int z=1;z<=t;++z){
        int n,q;
        cin>>n>>q;
        vector<vector<int>>P;
        vector<int>Q(26);
        for(int i=0;i<26;++i){
            Q[i]=0;
        }
        string s;
        cin>>s;
        for(int i=0;i<n;++i){
            Q[s[i]-'A']++;
            P.push_back(Q);
        }
        int ans=0;
        for(int i=0;i<q;++i){
            int l,r;
            cin>>l>>r;
            l--;
            r--;
            
            if(l==0){
                vector<int>Q=P[r];
                int c=0,d=0;
                for(auto x:Q){
                    if(x%2){
                        c++;
                    }
                    else{
                        d++;
                    }
                }
                if(c<=1){
                    ans++;
                }
            }
            else{
                int c=0;
                vector<int>Q1=P[l-1];
                vector<int>Q2=P[r];
                for(int i=0;i<26;++i){
                    Q2[i]-=Q1[i];
                    if(Q2[i]%2){
                        c++;
                    }
                }
                if(c<=1){
                    ans++;
                }
            }
        }
        
        cout<<"Case #"<<z<<": "<<ans<<endl;
    }
}
