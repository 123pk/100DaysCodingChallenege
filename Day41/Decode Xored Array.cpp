/*
Platform :- Leetcode
Problem :- Decode Xored Array
*/

class Solution {
public:
    vector<int> decode(vector<int>& A, int c) {
        int n=A.size();
        n++;
        vector<int>P(n);
        P[0]=c;
        for(int i=0;i<A.size();++i){
            P[i+1]=c xor A[i];
            c=P[i+1];
        }
        return P;
    }
};
