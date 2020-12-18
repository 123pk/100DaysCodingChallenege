/*
Platform :- Leetcode
Problem :- Permutations
Approach :- sort the array of nums with the help of "next_permutation" builtin function find next permutation of array and push back in your answer
*/
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>P;
        sort(nums.begin(),nums.end());
        do{
            P.push_back(nums);
        }while(next_permutation(nums.begin(),nums.end()));
           
        return P;
    }
};
