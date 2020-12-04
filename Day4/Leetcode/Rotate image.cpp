/*
Platform :- Leetcode
Question :- Rotate Image
Approach :- we need to analyse that after rotation our columns become our row and in reverse order .
           if our column is [1,2,3,4,5] --> it will become our row with elements [5,4,3,2,1].
           
           We can do so by taking all the coulmn elements in revese order --> adding it as row in a temporay matrix and making our matrix equal to temporary matrix at end.
*/


class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        vector<vector<int>>temp;
        for(int j=0;j<matrix[0].size();++j){
            
            //taking all the elements of column wise in a vector
            vector<int>A;
            for(int i=0;i<matrix.size();++i)
            {
                A.push_back(matrix[i][j]);
            }
            
            // making colums our rows by feeding elements in reverse order
            vector<int>z;
            for(int i=A.size()-1;i>=0;--i){
                z.push_back(A[i]);
            }
            temp.push_back(z);
        }
        
        matrix=temp;
    }
};
