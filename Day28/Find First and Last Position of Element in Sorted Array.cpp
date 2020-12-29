/*
Pltaform :- Leetcode
Problem :- Find first and last Position of element in sorted array
Approach :- take two variable 'start' and 'end' and store with -1 intitally when you find target value and start=-1 then make start=end=i and after tha whenever you
            find target value change end to that index and return start and end

*/

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start=-1,end=-1;
        for(int i=0;i<nums.size();++i){
            if(start==-1){
                if(nums[i]==target){
                    start=i;
                    end=i;
                }
            }
            else{
                if(nums[i]==target)
                {
                    end=i;
                }
            }
        }
        vector<int>P;
        P.push_back(start);
        P.push_back(end);
        return P;
    }
};
