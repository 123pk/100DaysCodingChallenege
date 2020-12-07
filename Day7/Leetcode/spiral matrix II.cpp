/*
Platform :- leetcode
Question :- spiral matrix II

*/

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int d=1;
        int visited[n][n];
        vector<vector<int>>P(n,vector<int>(n));
        for(int i=0;i<n;++i){
            for(int j=0;j<n;++j){
               visited[i][j]=0;   
            }
        }
        
        int f=0,g=0,x=0,y=0;
        P[0][0]=d;
        d++;
        visited[0][0]=1;
        while(d<=(n*n)){
            
            if((f==0 && g==0)){
                
               
                    
                    for(int j=y+1;j<n;++j){
                        
                        if(visited[x][j]){
                            break;
                        }
                        else{
                            P[x][j]=d;
                            d++;
                            y=j;
                            visited[x][j]=1;
                        }
                    }
                    
                g=1;
                
            }
             if((f==0)&& (g==1)){
              
                for(int j=y;j<n;++j){
                    
                    for(int i=x+1;i<n;++i)
                    { 
                        
                        if(visited[i][j]){
                            break;
                        }
                        else{
                          
                            visited[i][j]=1;
                            P[i][j]=d;
                             d++;
                            x=i;
                            y=j;
                            
                        }
                    }
                    break;
                }
                f=1;
            }
             if( f==1 && g==1){
               
               
                    for(int j=y-1;j>=0;--j){
                    
                        if(visited[x][j]){
                            break;
                        }
                        else{
                            
                                visited[x][j]=1;
                            P[x][j]=d;
                            d++;
                            y=j;
                        }
                    }
                   
                g=0; 
                
            }
            if((f==1 && g==0)){
                
              
                    for(int i=x-1;i>=0;--i){
                        if(visited[i][y]){
                            break;
                        }
                        else
                        { 
                            
                                visited[i][y]=1;
                            P[i][y]=d;
                            d++;
                            x=i;
                        }
                    }
                  
                f=0;
            }
            
           
        }
        
        return P;
        
        
    }
};
