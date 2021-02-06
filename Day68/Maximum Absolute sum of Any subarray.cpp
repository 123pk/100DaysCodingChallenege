/*
Platform :- Leetcode
Contest :- Biweekly Contest 45
Problem :- Maximum Absolute Sum of Any Subarray
*/

class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int tot=0;
        int mx=0;
        for(auto x:nums){
            if(tot<0){
                tot=0;
                
            }
            tot+=x;
            mx=max(mx,tot);
        }
        
        int mn=INT_MAX;
        tot=0;
        for(auto x:nums){
            if(tot>0){
                tot=0;
            }
            tot+=x;
            mn=min(mn,tot);
        }
        mn=abs(mn);
        return max(mx,mn);
    }
};
