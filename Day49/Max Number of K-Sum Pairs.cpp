/*
Platform :- Leetcode
Problem :- Max Number of K-Sum Pairs
*/

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        map<int,int>P;
        for(auto x:nums){
            P[x]++;
        }
        
        int tot=0;
        for(int i=0;i<nums.size();++i){
            int temp=k-nums[i];
            if(P[temp]){
                P[temp]--;
                if(P[nums[i]]){
                    tot++;
                    P[nums[i]]--;
                    
                }
                else{
                    P[temp]++;
                }
            }
        }
        return tot;
    }
};
