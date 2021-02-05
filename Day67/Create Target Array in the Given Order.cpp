/*
Platform :- Leetcode
Problem :- Create Target Array in the Given Order
Hint :- Brute force
*/

class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int>ans;
        for(int i=0;i<nums.size();++i){
            vector<int>temp;
            for(int j=0;j<index[i];++j){
                temp.push_back(ans[j]);
            }
            temp.push_back(nums[i]);
            
            for(int j=index[i];j<ans.size();++j){
                temp.push_back(ans[j]);
            }
            ans=temp;
        }
        return ans;
    }
};
