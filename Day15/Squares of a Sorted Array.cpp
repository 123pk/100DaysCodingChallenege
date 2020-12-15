/*
Platform :- Leetcode
Problem :- Squares of a Sorted Array
Approach :- Multiply each number of array by itself and sort it
*/
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i=0;i<nums.size();++i){
            nums[i]*=nums[i];
        }
        sort(nums.begin(),nums.end());
        return nums;
    }
};
