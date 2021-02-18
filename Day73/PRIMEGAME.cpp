/*
Platform :- Codechef
Contest :- February Long
Problem :- Prime Game

SOLUTION WILL BE ADDED ONCE CONTEST IS OVER
*/

#include<bits/stdc++.h>
using namespace std;
int dp[1000001];
bool prime[1000001];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    
    
    dp[0]=0;
    dp[1]=0;
     int mx=0;
     
     memset(prime, true, sizeof(prime));
    for (int x = 2; x*x <= 1000000; x++)
    {
         
        if (prime[x] == true) 
        {
            
            for (int i = x * x; i <= 1000000; i += x)
                prime[i] = false;
        }
         
    }
    
    for(int i=2;i<=1000000;++i){
        if(prime[i]){
            mx++;
            dp[i]=mx;
        }
        else{
            dp[i]=mx;
        }
    }
    
    while(t--){
        int x,y;
        cin>>x>>y;
        
        if(dp[x]>y){
            cout<<"Divyam\n";
        }
        else{
            cout<<"Chef\n";
        }
    }
}
