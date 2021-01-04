#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        priority_queue<long int>P,Q;
        for(int i=0;i<n;++i){
            long int x;
            cin>>x;
            if(x%2==0){
                P.push(x);
            }
            else{
                Q.push(x);
            }
        }
        
        long long tot1=0,tot2=0;
        int c=0;
        while(1){
            if(P.empty() && Q.empty())break;
            
            if(!P.empty() && !Q.empty()){
            long int z1=P.top();
            long int z2=Q.top();
            if(c%2){
                if(z1>z2){
                    P.pop();
                }
                else{
                    tot2+=z2;
                    Q.pop();
                }
            }
            else{
                if(z1>=z2){
                    tot1+=z1;
                    P.pop();
                }
                else{
                    Q.pop();
                }
            }
            }
            else{
                if(P.empty()){
                    if(c%2==0){
                        Q.pop();
                    }
                    else{
                        tot2+=Q.top();
                        Q.pop();
                    }
                }
                else{
                    if(c%2){
                        P.pop();
                    }
                    else{
                        tot1+=P.top();
                        P.pop();
                    }
                }
            }
            c++;
        }
        
        if(tot1==tot2){
            cout<<"Tie"<<endl;
        }
        else if(tot1>tot2){
            cout<<"Alice"<<endl;
        }
        else cout<<"Bob"<<endl;
    }
}
