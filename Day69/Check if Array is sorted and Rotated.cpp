/*
Platform :- Leetcode
Contest :- Weekly contest 227
Problem :- Check if Array is Sorted and Rotated
*/

class Solution {
public:
    bool check(vector<int>& nums) {
        int mn=INT_MAX;
        for(auto x:nums){
            mn=min(mn,x);
        }
        vector<int>temp,Z;
        int f=0;
        
        reverse(nums.begin(),nums.end());
        for(auto x:nums){
            if(f){
                if(x==mn){
                    Z.push_back(x);
                }
                else
                {
                temp.push_back(x);
                }
            }
            else{
                if(x==mn){
                    f=1;Z.push_back(x);
                }
                else{
                    Z.push_back(x);
                }
            }
        }
        
        
        reverse(temp.begin(),temp.end());
        reverse(Z.begin(),Z.end());
        
        for(auto x:temp){
            Z.push_back(x);
        }
        
        for(int i=1;i<Z.size();++i){
            if(Z[i]<Z[i-1])return false;
        }
        return true;
    }
};
