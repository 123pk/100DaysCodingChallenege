/*
Platform :- Codeforces
Problem :- B- Last Years Substring
Approach :- start from the end of the string and find the atching characters of "2020" them find the remaining characters from front if not found print "NO" else "YES" 
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
        string temp="0202";
        string temp2="2020";
        if(s=="2020"){
            cout<<"YES"<<endl;
        }
        else{
            int f=0;
            int j=0;
            for(int i=n-1;i>=0;--i){
                if(temp[j]==s[i]){
                    j++;
                    if(j==4){
                        break;
                    }
                }
                else{
                    f=1;
                    break;
                }
            }
            
            if(f){
              
                int g=0;
                for(int i=0;i<(4-j);++i){
                    if(s[i]!=temp2[i]){
                        g=1;
                        break;
                    }
                }
                
                if(g)cout<<"NO"<<endl;
                else cout<<"YES"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
    }
}
