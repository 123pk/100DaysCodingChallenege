/*
Platform :- Codehcef
Problem  :- Cybalphabit

*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    map<long long ,char>P;
    int c=0;
    for(char i='a';i<='z';++i){
       long long temp=pow(2,c);
       c++;
       P[temp]=i;
    }
    while(t--){
        long long n,k;
        cin>>n>>k;
        
        
        if(n>k){
            cout<<-1<<endl;
        }
        else{
            if(n==k){
                for(int i=1;i<=n;++i)cout<<'a';
                cout<<endl;
            }
            else{
                string s=bitset<32>(k).to_string();
                reverse(s.begin(),s.end());
                int c=0;
                priority_queue<long long>Q;
                for(int i=0;i<s.size();++i){
                    if(s[i]=='1'){
                       Q.push(pow(2,i));
                        c++;
                    }
                }
                
                if(c>n){
                    cout<<-1<<endl;
                }
                else{
                    if(c==n){
                        for(int i=0;i<=s.size();++i){
                            if(s[i]=='1'){
                                long long temp=pow(2,i);
                                cout<<P[temp];
                            }
                        }
                        cout<<endl;
                    }
                    else{
                        int f=0;
                        while(c<=n){
                            if(c==n){
                                f=1;break;
                            }
                            else{
                                long long temp=Q.top();
                                Q.pop();
                                if(temp%2)break;
                                Q.push(temp/2);
                                Q.push(temp/2);
                                c++;
                            }
                            
                        }
                        
                        if(f==0)cout<<-1<<endl;
                        else {
                            while(!Q.empty()){
                                cout<<P[Q.top()];
                                Q.pop();
                            }
                            cout<<endl;
                        }
                    }
                }
                
            }
        }
    }
}
