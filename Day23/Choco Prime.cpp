/*
Platform :- Codechef
Problem :- CPRIME ( Choco Prime)
Approach :- Check if number if Prime is not then if prime convert it into string and check for palindrome
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        int f=0;
        for(int i=2;i*i<=n;++i){
            if(n%i==0){
                f=1;
                break;
            }
        }
        
        if(f)cout<<"No"<<endl;
        else{
            string s=to_string(n);
            int x=s.size();
            for(int i=0;i<(x/2);++i){
                if(s[i]!=s[x-1-i]){
                    f=1;
                    break;
                }
            }
            if(f)cout<<"No"<<endl;
            else cout<<"Yes"<<endl;
        }
    }
}
