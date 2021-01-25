/*
Platform :- Leetcode
Problem :- Check If All 1's Are at Least Length K Places Away
Hint :- store index of last 1
*/


class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int f=0;
        int start=0;
        for(int i=0;i<nums.size();++i){
            if(f){
                if(nums[i]){
                    int temp=i-(start+1);
                    if(temp<k)return false;
                    start=i;
                }
            }
            else{
                if(nums[i]){
                    start=i;
                    f=1;
                }
            }
        }
        return true;
    }
};
