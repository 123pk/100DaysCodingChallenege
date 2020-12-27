/*
Platform :- Codechef
Problem :- One zero swaps 
Approach :- i. if number of '0's in s ! = number of '0's in tp it is never possible so answer is "No"
            ii. if s==tp print "Yes"
            iii. make a string of all characters of 's' that are not equal to characters at 'tp'
            iv. take one temperory variable c=0 and for each '1' in 's' do c++ else c-- if at any point c<0 then it is never possible print "No" else print "Yes"

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s,tp;
        cin>>s>>tp;
        if(s==tp){cout<<"Yes"<<endl;continue;}
        int c=0,d=0;
        for(auto x:s)if(x=='0')c++;
        for(auto x:tp)if(x=='0')d++;
        if(c==d){
            int k=0;string z;
            for(int i=0;i<n;++i){
                if(s[i]!=tp[i]){
                    z+=s[i];
                    if(s[i]=='0')k++;
                }
            }
            
            int a=0;
            bool xx=true;
            for(auto x:z){
                if(x=='0'){
                    a--;
                }
                else{
                    a++;
                }
                if(a<0){
                    xx=false;break;
                }
            }
            
            if(xx)cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
        else cout<<"No"<<endl;
    }
}
