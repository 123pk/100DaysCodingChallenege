/*
Platform :- Leetcode
Problem:- Merge Sorted Array
*/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       int j=0;
        for(int i=m;i<nums1.size();++i){
           if(j<n){
              nums1[i]=nums2[j];
               j++;
           }
           else{
               break;
           }
       }
        sort(nums1.begin(),nums1.end());
    }
};
