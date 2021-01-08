/*
Platform :- Codeforces
Problem :- B - Hills and Valleys
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
        int P[n];
        
        for(int i=0;i<n;++i){
            cin>>A[i];
           
        }
        if(n<3){
            cout<<0<<endl;
            continue;
        }
        for(int i=0;i<n;++i){
            P[i]=0;
        }
        int c=0;
        for(int i=1;i<n-1;++i){
            if(((A[i]<A[i-1]) && (A[i]<A[i+1])) || ((A[i]>A[i-1]) && (A[i]>A[i+1])))
            {
                c++;
                P[i]=1;
            }
            
        }
        
        int mx=0;
        for(int i=0;i<n;++i){
            if(i==0||i==n-1){
                if(i==0){
                    if(P[i+1]){
                            mx=max(mx,1);
                    }
                }
                else{
                    if(P[i-1]){
                        mx=max(mx,1);
                    }
                }
            }
            else{
                int temp=0;
                if(P[i]){
                    temp++;
                }
                if(P[i-1])temp++;
                if(P[i+1])temp++;
                
                   
                   if(temp==2){
                       if(P[i]&&P[i+1]){
                           long int temp2=A[i];
                           A[i]=A[i+1];
                           if((i-2)>=0){
                               if((A[i-1]>A[i] && A[i-1]>A[i-2]) ||(A[i-1]<A[i] && A[i-1]<A[i-2])){
                                   temp--;
                               }
                               
                           }
                           A[i]=temp2;
                       }
                       else{
                           long int temp2=A[i];
                           A[i]=A[i-1];
                           if((i+2)<n){
                               if((A[i+1]>A[i] && A[i+1]>A[i+2]) ||(A[i+1]<A[i] && A[i+1]<A[i+2])){
                                   temp--;
                               }
                           }
                           A[i]=temp2;
                       }
                   }   
                  
                
                mx=max(mx,temp);
            }
        }
        //cout<<c<<" "<<mx<<endl;
        cout<<(c-mx)<<endl;
        
    }
}
