/*
Platform :- Leetcode
Contest :- Bi weekly contest 46
Problem :- Form Array by concatenating subarrays of Another array
*/

class Solution {
public:
    bool canChoose(vector<vector<int>>& groups, vector<int>& nums) {
        int start=0;
        int n=groups.size();
        for(int i=0;i<n;++i){
            int g=0;
            for(int j=start;j<=(nums.size()-groups[i].size());++j){
                int f=0;
                for(int k=0;k<groups[i].size();++k){
                    if(nums[k+j]!=groups[i][k]){
                        f=1;break;
                    }
                    start=k+j+1;
                }
                if(f){
                     continue;
                }
                else{
                    g=1;break;
                }
            }
            if(g==0)return false;
        }
        return true;
    }
};
