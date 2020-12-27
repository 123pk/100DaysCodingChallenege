/*
Platform :- Codehcef
Problem :- Pattern I
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        for(int i=1;i<=n;++i){
            if(i==1){
                cout<<"*"<<endl;
            }
            else if(i==n){
                for(int j=1;j<=n;++j){
                    cout<<"*";
                }
                cout<<endl;
            }
            else{
                for(int j=1;j<=i;++j){
                    if(j==1){
                        cout<<"*";
                    }
                    else if(j==i){
                        cout<<"*";
                    }
                    else cout<<" ";
                }
              cout<<endl;
            }
        }
    }
}
