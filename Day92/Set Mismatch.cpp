/*
Platform :- Leetcode
Problem :- Set Mismatch
Event :- March Daily Challenege
*/

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>ans;
        map<int,int>P;
        int temp=0;
        for(int i=0;i<nums.size();++i){
            P[nums[i]]++;
        }
        
        int f=0;
        int start=1;
        for(int i=1;i<=nums.size();++i){
            if(P[i]==0){
                f=1;
                temp=i;
            }
        }
        if(f==0){
            temp=nums.size()+1;
        }
        
        for(int i=1;i<nums.size();++i){
            if(nums[i]==nums[i-1]){
                ans.push_back(nums[i]);
                break;
            }
        }
        ans.push_back(temp);
        return ans;
    }
};
