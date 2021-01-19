/*
Platform :- Codeforces
Problem :- A - Puzzle from future
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
        int f=0;
        string temp;
        int l=0;
        for(int i=0;i<n;++i){
            if(i==0){
                
               temp+='1';
               if(s[i]=='1'){
                   l=2;
               }
               else{
                   l=1;
               }
                continue;
            }
            
                if(l==2){
                    if(s[i]=='1'){
                        temp+='0';
                    }
                    else{
                        temp+='1';
                    }
                    l=1;
                }
                else{
                     
                        if(s[i]=='0' && l==1){
                            temp+='0';
                            l=0;
                        }
                      else{
                        temp+='1';
                    if(s[i]=='1'){
                        l=2;
                    }
                    else{
                        l=1;
                    }
                    
                    }
                    
                }

        }
        cout<<temp<<endl;
    }
}
