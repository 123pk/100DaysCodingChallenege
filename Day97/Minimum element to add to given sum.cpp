/*
Pltform :- Leetcode
Problem :- Minimum elemnts to add to given sum
Contest :- Weekly contest 231
*/

class Solution {
public:
    int minElements(vector<int>& nums, int limit, int goal) {
        long long tot=0;
        for(int i=0;i<nums.size();++i){
            tot+=nums[i];
        }
        if(tot==goal)return 0;
        long long dif=abs(tot-goal);
        int temp=dif/limit;
        if(dif%limit)temp++;
        return temp;
    }
};
