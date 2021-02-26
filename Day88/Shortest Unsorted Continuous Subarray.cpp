/*
Platform :- Leetcode
Problem :- Shortest Unsorted Continuous Subarray
*/

class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
         int start=0,end=0;
         vector<int>temp;
        
        for(auto x:nums)temp.push_back(x);
        
        sort(temp.begin(),temp.end());
        int i=0,j=0;
        for(i=0;i<nums.size();++i){
            if(nums[i]!=temp[i])break;
        }
        start=i;
        
        for(j=nums.size()-1;j>=0;--j){
            if(nums[j]!=temp[j])break;
        }
        end=j;
        
        return max(0,(end-start)+1);
    }
};
