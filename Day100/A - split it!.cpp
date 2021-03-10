/*
Platform :- Codeforces
Problem :- A - Split it!
contest :- Codeforces round #706  div 2
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,k;
        cin>>n>>k;
        
        string s;
        cin>>s;
        if(k==0){
            cout<<"YES"<<endl;
            continue;
        }
        
         
            if((k*2)==n){
                cout<<"NO"<<endl;
                continue;
            }
            int temp=(k);
            
            int f=0;
            int i=0;
            while(i<(n-1-i)){
                if(s[i]!=s[n-1-i])break;
                //cout<<s[i]<<" "<<s[n-1-i]<<" "<<temp<<endl;
                i++;
                temp--;
                if(temp==0)break;
            }
            
             
            if(temp )cout<<"NO"<<endl;
            else cout<<"YES"<<endl;

    }
}
