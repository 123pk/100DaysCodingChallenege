/*
Platform :- Codeforces
Question :- Avoid Trygub ( Codeforces Global round 12)
Approach :- One simple approach is to find 't' in given string and take all the 't' of given string to end.
            if 't' is not present then we don't need to worry about as Trygub will never be formed without 't' we can simply print given string
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
       // cout<<s<<" $ ";
        string temp="";
        string z="";
        string k="trygub";
        reverse(k.begin(),k.end());
        stack<char>P;
        for(auto x:k)P.push(x);
        
        for(auto x:s){
            if(P.size()){
                if(x==P.top())
               P.pop();
            }
            
        }
        
        if(P.size())
        {
            cout<<s<<endl;
           continue;
        }
        for(auto x:s){
            if(x=='t'){
                z+=x;

            }
            else{
                temp+=x;
            }
        }
        
        temp+=z;
        cout<<(temp)<<endl;
    }
}
