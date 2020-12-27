/*
Platform :- Codehchef
Problem :- Pattern F
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        for(int i=n;i>=1;--i){
            vector<int>s;
            for(int j=1;j<=i;++j){
                s.push_back(j);
            }
            if(i%2==0){
                reverse(s.begin(),s.end());
            }
            for(auto x:s)cout<<x<<"";
            cout<<endl;
        }
    }
}
