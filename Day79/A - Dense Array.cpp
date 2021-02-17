/*
Platform :- Codeforces
Contest :- Codeforces Round 702 Div 3
Problem :- A - Dense Array
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        long int A[n];
        long int tot=0;
        for(int i=0;i<n;++i){
            cin>>A[i];
            if(i){
                int temp=abs(A[i]-A[i-1]);
                temp/=2;
                if(abs(A[i]-A[i-1])%2)temp++;
                
                if(temp>1){
                    int c=0;
                    long int z=min(A[i],A[i-1]);
                    long int z2=max(A[i],A[i-1]);
                    while(1){
                        if(z*2 < z2){
                            z*=2;
                        }
                        else break;
                        c++;
                    }
                    tot+=c;
                }
                else{
                    long int z=min(A[i],A[i-1]);
                    if(z==1){
                      int c=0;
                    long int z=min(A[i],A[i-1]);
                    long int z2=max(A[i],A[i-1]);
                    while(1){
                        if(z*2 < z2){
                            z*=2;
                        }
                        else break;
                        c++;
                    }
                    tot+=c;  
                    }
                }
            }
        }
        cout<<tot<<endl;
    }
}
