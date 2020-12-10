/*
Platform :- Codeforces 
Question :- Equalize prizes
Approach :- Find the minimum and maximum element of array .
            i. if ( min_elemnt + max_element ) is odd then we check for two values (min_element+max_element)/2 and ((min_element+ max_element)/2)+1
               by traversing through array 
            ii. else we check for (min_element + max_element )/2 by traversing through array
            iii. check if ( abs(value- A[i])>k )then O/P - -1
            iv. else O/P value
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        long int k;
        cin>>n>>k;
        
        long int A[n];
        long int mx=-1,mn=1000000000;
        for(int i=0;i<n;++i){
            cin>>A[i];
            mx=max(mx,A[i]);
            mn=min(mn,A[i]);
        }
        
        long int z=mx+mn;
        if(z%2){
            long int temp1=z/2;
            long int temp2=temp1+1;
            //cout<<(temp1)<<" "<<temp2<<endl;
            int f=0;
            for(int i=0;i<n;++i){
                if(abs(A[i]-temp1)>k)f=1;
            }
            
            
            
            if(f==0){
                cout<<max(temp1,mn+k)<<endl;
            }
            else{
                for(int i=0;i<n;++i){
                if(abs(A[i]-temp2)>k)f=1;
               }
                if(f==0){
                    cout<<max(temp2,mn+k)<<endl;
                }
                else{
                    cout<<-1<<endl;
                }
                
            }
        }
        else{
            long int temp=(mn+mx)/2;
            int f=0;
            for(int i=0;i<n;++i){
                if(abs(A[i]-temp)>k)f=1;
            }
            
            if(f==0){
                cout<<max(temp,mn+k)<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }
        
    }
}
