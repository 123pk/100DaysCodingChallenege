/*
Platform :- Leetcode
Problem :- Maximum errasure value
Approach :- using sliding window find the maximum value 
*/

class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int start=0;
        int tot=0,mx=0;
        map<int,int>P;
        for(int i=0;i<nums.size();++i){
            if(P[nums[i]]==0){
                tot+=nums[i];
                P[nums[i]]++;
                mx=max(mx,tot);
            }
            else{
               
                P[nums[i]]++;
                for(int j=start;j<i;++j){
                    if(P[nums[j]]==2){
                        tot-=nums[j];
                        start=j+1;
                        P[nums[j]]--;
                        break;
                    }
                    else{
                        tot-=nums[j];
                        P[nums[j]]--;
                    }
                }
                tot+=nums[i];
                mx=max(mx,tot);
            }
        }
        return mx;
    }
};
