/*
Platform :- leetcode
Question :- spiral matrix II
Approach :- I have used two variables f & g to determine in which direction I need to move and an visited matrix to track record of the visited 
            cells of matrix .
            i. Create a visited matrix of n*n and store 0 in it & similarly with answer matrix 
            ii. initialised  d=1 and ans[0][0] = d and simulatenously g=0,f=0 and visited[0][0]=1
            iii. let us pre determine what we need to do according to various combination values of f & g
                1. if f=0 && g==0 go from left to right  and put the value of d in ans matrix at corresponding index and increment d if we reach a vsited node or last cell of 
                   that row ---> make g=1
                2. if f==0 && g==1 go from top to bottom and perform same operation . if we get to the visited cell or last cell while going from top to bottom 
                   ---> make f=1
                3. if f==1 && g==1 go from right to left and perform similar opeeration and update d respectively ----> make g=0 when we reach a visted node or last node  
                4. if f==1 && g==0 go from bottom to up perform simlar operation performed above respectively ----> make f=0 when we reach a visted node or last node
                5. we will repeat step 1,2,3,4 until ( d <= (n*n)) as maximum number that can be enetred in matrix in (n*n).
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
