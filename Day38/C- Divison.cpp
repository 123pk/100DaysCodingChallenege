/*
Platform :- Codeforces
Problem :- C - Problem 

*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        long long n;
        long long q;
        cin>>n>>q;
        
        if(n%q)cout<<n<<endl;
        else{
            vector<long long>P;
        
            for(long long i=1;i*i<=q;++i){
                if(q%i==0){
                    if(q/i==i)P.push_back(i);
                    else {
                        P.push_back(q/i);
                        P.push_back(i);
                    }
                }
            }
            
            sort(P.begin(),P.end());
            int f=0;
            unsigned long long ans=1;
     
            for(int i=0;i<P.size();++i){
                if(P[i]==1){
                    continue;
                }
                if(n%P[i]==0){
                    unsigned long long temp=(n/P[i]);
                    unsigned long long temp2=P[i];
                    
                    if(temp%q){
                        ans=max(ans,temp);
                        f=1;
                    }
                    else{
                        while(1){
                            if(temp%q==0){
                              temp/=P[i];  
                            }
                            else{
                                f=1;
                                ans=max(ans,temp);
                                break;
                            }
                            
                        }
                        
                    }
                    if(temp2%q){
                        ans=max(ans,temp2);
                        f=1;
                    }
                    
                }
                
            }
            if(f)cout<<ans<<endl;
            else cout<<1<<endl;
        }
    }
}
