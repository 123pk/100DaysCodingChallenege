/*
Platform :- Codechef
Problem :- Fair Seelction 
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        
        long int A[n];
        long long tot1=0,tot2=0;
        for(int i=0;i<n;++i){
            cin>>A[i];
            tot1+=A[i];
        }
        
        long int B[m];
        for(int i=0;i<m;++i){
            cin>>B[i];
            tot2+=B[i];
        }
        
        if((tot1>tot2)){
            cout<<0<<endl;
        }
        else{
            sort(A,A+n);
            sort(B,B+m,greater<long int>());
            int c=0;
            int j=0;int f=0;
            for(int i=0;i<n;++i){
                if(j==m){
                    break;
                }
                long int temp=B[j]-A[i];
                if(temp>0){
                    if(tot1<=tot2){
                        tot1+=temp;
                        tot2-=temp;
                        c++;
                    }
                }
                if(tot1>tot2){
                    f=1;
                    break;
                }
                j++;
            }
            
            if(f){
                cout<<c<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }
    }
}
