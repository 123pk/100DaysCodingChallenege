/*
Platform :- Codechef
Problem :- Minimum Attendance Requirement
Approach :- total number of absent's < 30 for passing else not

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
        
        int tot=30,d=0;
        
        for(int i=0;i<n;++i){
            if(s[i]=='0')d++;
        }
        
            if((d)<=tot)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
