/*
Platform :- Leetcode
Problem :- 4Sum II
Approach :- find all pair sum of A,B using two for loop.
            similarly find all pair sum of C,D and check id -ve of that sum is already present in A,B then increment it by number of times the -ve of sum is present

*/

class Solution {
public:
    int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
        
        int c=0;int d=0;
        map<int,int>P;
       
        for(int i=0;i<A.size();++i){
            for(int j=0;j<B.size();++j){
                    long int temp=A[i]+B[j];
                    
                    if(temp){
                       P[temp]++;
                    }
                    else{
                        d++;
                    }
                }
        }
        
        for(int i=0;i<C.size();++i){
            for(int j=0;j<D.size();++j){
                long int temp=C[i]+D[j];
                temp*=-1;
                if(temp){
                    c+=P[temp];
                }
                else{
                    c+=d;
                }
            }
        }
        
        
        return c;
        
    }
};
