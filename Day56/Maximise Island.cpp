/*
Platform :- Codechef
Problem :- Maximise Island 
Hint :- Greedily find situation when maximum islands can be formed 
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
     
    while(t--){
        int n,m;
        cin>>n>>m;
        
        char ch[n][m];
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                cin>>ch[i][j];
            }
        }
        
        //island at odd position
        int c=0;
        
        for(int i=0;i<n;++i){
            if(i%2){
                for(int j=0;j<m;++j){
                    if(j%2==0){
                        if(ch[i][j]=='*'){
                            c++;
                        }
                    }
                    else {
                        if(ch[i][j]=='.'){
                            c++;
                        }
                    }
                }
            }
            else{
                for(int j=0;j<m;++j){
                    if(j%2){
                        if(ch[i][j]=='*'){
                            c++;
                        }
                    }
                    else{
                        if(ch[i][j]=='.'){
                            c++;
                        }
                    }
                }
            }
        }
        
        if(n%2 && m%2) cout<<c<<endl;
        else{
            
            int d=0;
            for(int i=0;i<n;++i){
            if(i%2==0){
                for(int j=0;j<m;++j){
                    if(j%2==0){
                        if(ch[i][j]=='*'){
                            d++;
                        }
                    }
                    else {
                        if(ch[i][j]=='.'){
                            d++;
                        }
                    }
                }
            }
            else{
                for(int j=0;j<m;++j){
                    if(j%2){
                        if(ch[i][j]=='*'){
                            d++;
                        }
                    }
                    else{
                        if(ch[i][j]=='.'){
                            d++;
                        }
                    }
                }
            }
            }
            cout<<min(c,d)<<endl;
        }
    }
}
