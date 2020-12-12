/*
Platform :- Leetcode
Problem :- Sum of Absolute Differences in a Sorted Array
Approach :- we are given few thing that array is non decreasing or sorted in ascending order 
            i. Analyse that we are find abs( A[i]- A[j]) for all 0<=j<n  
            ii. we can divide this into two parts one for value less than A[i] and second for value greater than A[i]
            iii. As for values < A[i] we will find  abs( (i+1)*A[i] - temp ) where tem is total sum till A[i] 
            iv. For values >A[i] we will find abs( (tot-temp) - (n-(i+1)*A[i]) ) where tot is total summation of array and temp is summation till i

*/
class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int tot=0;
        for(auto x:nums)tot+=x;
        
        int n=nums.size();
        vector<int>ans;
        int temp=0,c=0;
        
        for(auto x:nums){
            temp+=x;
            c++;
            int z=((c*x)-temp);
            
            z+=(tot-temp)-((n-c)*x);
            
            ans.push_back(z);
        }
        
        return ans;
    }
};
