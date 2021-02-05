/*
Platform :- Coding Competition with google
Problem :- Grid Escape
Hint :- whenever k == (r*c)-1 it is IMPOSSIBLE else POSSIBLE
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    for(int z=1;z<=t;++z){
        cout<<"Case #"<<z<<": ";
        
        int r,c,k;
        cin>>r>>c>>k;
        
        if( ((k+1) == (r*c))){
            cout<<"IMPOSSIBLE"<<endl;
        }
        else{
            k=(r*c)-k;
            cout<<"POSSIBLE"<<endl;
            if(r==1){
                for(int i=0;i<c;++i){
                    if((i+1)== k ){
                        cout<<"W";
                    }
                    else{
                        cout<<"E";
                    }
                }
                cout<<endl;
                continue;
            }
            char s[r][c];
            for(int i=0;i<r;++i){
                for(int j=0;j<c;++j){
                    s[i][j]='S';
                }
            }
            
            if(k<r){
                s[k-1][0]='N';
                
            }
            else{
                int j=0;
                while(k>=r){
                    s[r-1][j]='N';
                    j++;
                    k-=r;
                }
                int i=0;
                if(k){
                    if(k==1){
                        s[k-1][j]='W';
                    }
                    else s[k-1][j]='N';
                    
                }
                
                
                }
             for(int i=0;i<r;++i){
                for(int j=0;j<c;++j){
                    cout<<s[i][j];
                }
                cout<<endl;
            }
        }
    }
}
