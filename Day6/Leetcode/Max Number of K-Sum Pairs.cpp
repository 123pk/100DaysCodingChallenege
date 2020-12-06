/*
Platform :- Leetcode
Question :- Maximum number of K-Sum Pairs
Approach :- given 'k' we will traverse through array from 0<=i<n and check for A[i] there is k-A[i] in array 
            if(k-A[i]) is present we can perform operation otherwise we cant. After each operation we delete A[i],k-A[i] 
            we can do so using "map" in stl c++.

*/
class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int c=0;
        map<int,int>P;
        for(auto x:nums)P[x]++;

        for(int i=0;i<nums.size();++i){
            if(P[nums[i]])
            {
                int temp=(k-nums[i]);
                P[nums[i]]--;
                
             if(P[temp]){
                c++;
                P[temp]--;
            }
                
            }
            
        }
        return c;
        
    }
};
