/*
Platform :- Leetcode
Problem :- Remove element
hint :- we need extra space to store the dynamic size of array after deleting each element
*/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int f=nums.size();
        for(int i=0;i<nums.size();++i){
            if(nums[i]==val){
                f++;
                nums.erase(nums.begin()+i);
                f=nums.size();
                i--;
            }
             
        }
        return nums.size() ;
    }
};
