/*
Platform :- Codeforces
Event :- GYM Noobs round 2
Problem :- Team 
Hint :- two pointer, sorting
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        
        long int A[n];
        int c=0;
        for(int i=0;i<n;++i){
            cin>>A[i];
        }
        
        sort(A,A+n,greater<long int>());
        int end=n-1;
        int i=0;
        int ans=0;
        while(i<=end){
            if(A[i]>=k){
                ans++;
            }
            else{
                int temp=A[i];
                while((temp+A[end])<k && end>i){
                    end--;
                }
                if(end>i){
                   // cout<<temp<<" "<<A[end]<<" "<<(i+1)<<endl;
                 if((temp+A[end])>=k){
                    ans++;
                    end--;
                }
                
                }
                else{
                    break;
                }
                
            }
            i++;
        }
        cout<<ans<<endl;
    }
}
