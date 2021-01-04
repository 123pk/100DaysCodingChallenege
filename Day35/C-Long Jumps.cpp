#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        long int A[n];
        int c=0;
        long int mx=-1;
        vector<long int>P(n);
        for(int i=0;i<n;++i){
            cin>>A[i];
            if(i==0){
                mx=A[i];
                if((A[i]+i)<=n){
                    int temp=i+A[i];
                    P[(temp)]=max(P[(temp)],A[i]);
                }
                
            }
            else{
                long int z=P[i]+A[i];
                mx=max(mx,z);
                if((A[i]+i)<=n){
                    int temp=i+A[i];
                    P[(temp)]=max(P[(temp)],z);
                }
            }
        }
        
        cout<<mx<<endl;
    }
}
