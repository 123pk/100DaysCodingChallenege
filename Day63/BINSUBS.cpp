/*
Platform :- Codechef
Contest :- January Lunchtime 2021
Problem :- Binary Subsequence
Hint :- For non decreasing sequence all elemnets before '0' should be '0' and all elemnts after '0' should be '1' . try to find soptimal '0'from where ( no of 1's before it + 
        no of 0's after it ) is minimum.
        i. Edge cases when all 1's or only 1 or 0 in whole string
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        string s;
        cin>>s;
        
        vector<pair<int,int>>P;
        int c=0,d=0;
        for(int i=0;i<n;++i){
            if(s[i]=='1'){
                c++;
            }
            else{
                d++;
            }
            P.push_back({c,d});
        }
        int ans=min(c,d);
        for(int i=1;i<n;++i){
            if(s[i]=='1'){
                if(s[i-1]=='0'){
                    int c2=P[i-1].first;
                    int d2=P[i-1].second;
                    int temp=(d-d2);
                    temp+=c2;
                    ans=min(ans,temp);
                }
            }
            else{
                if(s[i-1]=='1'){
                    int c2=P[i].first;
                    int d2=P[i].second;
                    int temp=(d-d2);
                    temp+=c2;
                    ans=min(ans,temp);
                }
            }
        }
        
        cout<<ans<<endl;
    }
}
