/*
Platform :- Leetcode
Problem :- Remove duplicates from sorted array II
Approach :- i. sort the array 
            ii. count the occurence of elements if count becomes ==3 remove one element and take care of index it is pointing 
                 as after deletion the size of array is decreased by 1 and the index which you are at currently after deletion will contain 
                 next element so we don't need to increment index in case we are deleting any element.

*/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        int c=0;
        for(int i=0;i<nums.size();++i){
            if(c){
                if(nums[i]==nums[i-1]){
                    c++;
                    if(c==3){
                        nums.erase(nums.begin()+i);
                        i--;
                        c=2;
                    }

                }
                else{
                    c=1;
                }
            }
            else{
                c=1;
            }
        }
        
        return nums.size();
    }
};
