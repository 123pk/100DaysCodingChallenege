/*
Platform :- Codechef
Problem :- Ice Wrapped Gifts
*/


#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin>>x;
    int n=(2*x)-1;
    bool visited[n][n];
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            visited[i][j]=false;
        }
    }
    int A[n][n];
    int start=0,end=0;
    int f=0,g=0;
    int c=x;
    while(c>=1){
        if(f==0 && g==0){
            for(int j=end;j<n;++j){
                if(visited[start][j])break;
                else{
                    A[start][j]=c;
                    visited[start][j]=true;end=j;
                }
                
            }
            f=1;
            start=start+1;
            
            f=1;
        }
        else if(f && g==0){
            for(int i=start;i<n;++i){
                if(visited[i][end])break;
                else{
                    A[i][end]=c;
                    visited[i][end]=true;
                    start=i;
                }
                
            }
            end-=1;
            //cout<<end<<" "<<start<<endl;
            g=1;
        } 
        else if(f && g){
            
            for(int i=end;i>=0;--i){
                if(visited[start][i])break;
                else{
                    A[start][i]=c;
                    visited[start][i]=true;
                    end=i;
                }
                //cout<<start<<" "<<i<<endl;
            }
            start-=1;
            f=0;
            
        }
        else{
            for(int i=start;i>=0;--i){
                if(visited[i][end])break;
                else{
                    A[i][end]=c;
                    visited[i][end]=true;
                    start=i;
                }
                
            }
            end+=1;
            g=0;
        }
        if(f==0 && g==0)c--;
    }
    
    
    
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
}
