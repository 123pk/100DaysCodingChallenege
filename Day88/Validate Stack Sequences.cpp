/*
Platform :-Leetcode
Problem :- Validate Stack Sequences
*/

class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int>P;
        int i=0,j=0;
        for(i=0;i<pushed.size();++i){
            P.push(pushed[i]);
            while(!P.empty() && P.top()==popped[j]){
                P.pop();
                j++;
            }
        }
        return P.empty();
    }
};
