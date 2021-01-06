/*
Platform:- Leetcode
Problem :- kth Missing Positive number 
Approach :- Apply bruteforce and find the kth missing number since constraints are low
*/
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int c=0;
        vector<int>P(2000);
        for(int i=0;i<arr.size();++i){
            P[arr[i]-1]++;
        }
        
        for(int i=0;i<2000;++i){
            if(P[i]==0){
                c++;
                if(c==k)return i+1;
            }
        }
        return 1000+c;
    }
};
